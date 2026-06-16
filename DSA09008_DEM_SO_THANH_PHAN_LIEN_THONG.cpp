#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];
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
        memset(visited, false, sizeof(visited));
        int n, m;
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                dfs(i);
                cnt++;
            }
        }
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        cout << cnt << endl;
    }
}