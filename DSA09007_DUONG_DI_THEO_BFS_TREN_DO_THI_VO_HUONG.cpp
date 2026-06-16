#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
int parent[1005];
bool visited[1005];
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(auto x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                parent[x] = v;
            }
        }
    }
}
void Path(int s, int t){
    vector<int> path;
    while(s != t){
        path.push_back(t);
        t = parent[t];
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    for(auto x : path){
        cout << x << " ";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        memset(visited, false, sizeof(visited));
        int n, m, s, t;
        cin >> n >> m >> s >> t;
        for(int i = 1; i <= m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(s);
        if(!visited[t]) cout << "-1";
        else Path(s, t);
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        cout << endl;
    }
}