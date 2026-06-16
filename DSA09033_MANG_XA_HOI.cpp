#include <bits/stdc++.h>
using namespace std;
int n, m;
set<int> adj[10005];
int visited[10005];
void input() {
	cin >> n >> m;
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].insert(y);
		adj[y].insert(x);
	}
}
void init() {
	memset(visited, 0, sizeof(visited));
	for(int i = 1; i <= n; i++) {
		adj[i].clear();
	}
}
int dinh, canh;
void dfs(int u) {
	dinh++;
	visited[u] = 1;
	canh += adj[u].size();
	for(auto v : adj[u]) {
		if(!visited[v]) {
			dfs(v);
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		init();
		input();
		int ok = 1;
		for(int i = 1; i <= n; i++) {
			if(!visited[i]) {
				dinh = 0;
				canh = 0;
				dfs(i); // cập nhật giá trị cho dinh là số đỉnh trong thành phần liên thông;
				canh /= 2; // tính cạnh bằng cách lấy tổng số bậc chia 2;
				if(dinh * (dinh - 1) / 2 != canh) ok = 0; // điều kiện: số đỉnh * (số đỉnh - 1) / 2 == số cạnh
			}
		}
		if(ok) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}