#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> adj[1005];
void dfs(int u){
    visited[u] = true;
    for(auto x : adj[u]){
        if(!visited[x]){
            dfs(x);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int q;
        cin >> q;
        for(int i = 1; i <= q; i++){
            int u, v;
            cin >> u >> v;
            dfs(u);
            if(!visited[v]){
                cout << "NO";
            }
            else cout << "YES";
            cout << endl;
            memset(visited, false, sizeof(visited));
        }
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        cout << endl;
    }
}