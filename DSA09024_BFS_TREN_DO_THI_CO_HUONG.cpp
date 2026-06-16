#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];
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
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		memset(visited, false, sizeof(visited));
		int m, n, u;
		cin >> n >> m >> u;
		for(int i = 1; i <= m; i++){
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
		}
		bfs(u);
		for(int i = 1; i <= n; i++){
			adj[i].clear();
		}
		cout << endl;
	}
}