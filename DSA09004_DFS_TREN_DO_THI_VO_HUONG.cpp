#include <bits/stdc++.h>
using namespace std;
int n, m, u;
vector<int> adj[1005];
bool visited[1005];
void input(){
	cin >> n >> m >> u;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
void init(){
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	memset(visited, false, sizeof(visited));
}
void dfs(int u){
	cout << u << " ";
	visited[u] = true;
	for(auto v : adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
void Solve(){
	init();
	input();
	dfs(u);
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
}