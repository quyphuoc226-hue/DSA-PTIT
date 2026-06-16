#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
int n, m;
void Solve(){
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int i = 1; i <= n; i++){
        cout << i << ": ";
        for(auto x : adj[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}