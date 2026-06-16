#include <bits/stdc++.h>
using namespace std;
int n, m, s, t, found;
int visited[1005];
vector<int> adj[1005];
int parent[1005];
void dfs(int u){
    visited[u] = 1;
    for(auto x : adj[u]){
        if(!visited[x]){
            dfs(x);
            parent[x] = u;
        }
    }
}
void Path(int s, int t){
    memset(visited, 0, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    dfs(s);
    if(!visited[t]) cout << "-1";
    else {
        vector<int> path;
        while(t != s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for(auto x : path){
            cout << x << " ";
        }
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        cin >> n >> m >> s >> t;
        for(int i = 1; i <= m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        Path(s, t);
        for(int i = 1;i <= n; i++){
        	adj[i].clear();
		}
        cout << endl;
    }
}