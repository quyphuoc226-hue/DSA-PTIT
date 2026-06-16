#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
int color[1005];
int n, m;
void init(){
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	memset(color, 0, sizeof(color));
}
void input(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
}
bool dfs(int u){
	color[u] = 1;
	for(auto v : adj[u]){
		if(color[v] == 0){
			if(dfs(v)) return true;
		}
		else if(color[v] == 1) return true;
	}
	color[u] = 2;
	return false;
}
void Solve(){
	init();
	input();
	for(int i = 1; i <= n; i++){
		if(color[i] == 0){
			if(dfs(i)){
				cout << "YES" << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
}