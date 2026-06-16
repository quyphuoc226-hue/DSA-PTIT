// Cách 1: Dùng riêng mảng Par

#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
int parent[1005];
set<int> adj[1005];
int st = 1, en;
bool dfs(int u) {
	visited[u] = true;
	for(auto v : adj[u]) {
		if(!visited[v]) {
			parent[v] = u;
			if(dfs(v)) return true;
		} else {
			if(v != parent[u] && v == st) {
				en = u;
				return true;
			}
		}
	}
	return false;
}
void Path(int st, int en) {
	vector<int> path;
	path.push_back(st);
	while(st != en) {
		path.push_back(en);
		en = parent[en];
	}
	path.push_back(st);
	reverse(path.begin(), path.end());
	for(auto x : path) {
		cout << x << " ";
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		memset(visited, false, sizeof(visited));
		int n, m;
		cin >> n >> m;
		for(int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			adj[x].insert(y);
			adj[y].insert(x);
		}

		if(dfs(1)) {
			Path(st, en);			
		} else cout << "NO";
		for(int i = 1; i <= n; i++) {
			adj[i].clear();
		}
		cout << endl;
	}
}

//Bài này lưu danh sách kề bằng vector thì bị WA phải dùng set.
//Dùng biến toàn cục cho tiện
//viết các hàm init() để reset biến toàn cục và input() để nhập dữ liệu nhìn cho gọn.
// đỉnh v luôn là đỉnh bắt đầu nên bài này cần có đk  v == st thì mới return true

// Cách 2: dùng par trong hàm dfs luôn
#include <bits/stdc++.h>
using namespace std;
int n, m;
set<int> adj[1005];
bool visited[1005];
int st = 1, en;
int parent[1005];
void init(){
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	memset(visited, false, sizeof(visited));
}
void input(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].insert(y);
		adj[y].insert(x);
	}
}
bool dfs(int u, int par){
	visited[u] = true;
	for(auto v : adj[u]){
		if(!visited[v]){
			parent[v] = u;
			if(dfs(v, u)) return true;
		} else {
			if(v != par && v == st){
				en = u;
				return true;
			} 
		}
	}
	return false;
}
void Path(int u, int v){
	vector<int> path;
	path.push_back(u);
	while(u != v){
		path.push_back(v);
		v = parent[v];
	}
	path.push_back(u);
	reverse(path.begin(), path.end());
	for(auto x : path){
		cout << x << " ";
	}
}
void Solve(){
	init();
	input();
	if(!dfs(1, 0)) cout << "NO";
	else Path(st, en);
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
}