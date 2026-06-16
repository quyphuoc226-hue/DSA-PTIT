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
void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		cout << v << " ";
		for(auto x : adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}
void Solve(){
	init();
	input();
	bfs(u);
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
}