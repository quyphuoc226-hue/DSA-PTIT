#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
void input(int v, int e){
    for(int i = 1; i <= e; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
}
int visited[1005] = {0};
void dfs(int u){
    visited[u] = 1;
    cout << u << " ";
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
        int v, e, u;
        cin >> v >> e >> u;
        input(v, e);
        dfs(u);
        for(int i = 1; i <= v; i++){
            adj[i].clear();
            visited[i] = 0;
        }
        cout << endl;
    }

}