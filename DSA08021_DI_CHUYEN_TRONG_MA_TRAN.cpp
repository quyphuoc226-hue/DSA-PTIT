#include <bits/stdc++.h>
using namespace std;
bool visited[1005][1005];
int d[1005][1005];
int n, m;
int a[1005][1005];
void bfs(int i, int j){
	queue<pair<int, int>> q;
	q.push({i, j});
	visited[i][j] = true;
	d[i][j] = 0;
	while(!q.empty()){
		pair<int, int> top = q.front();
		q.pop();
		if(top.first == n && top.second == m) return;
		int i1 = top.first, j1 = top.second + a[top.first][top.second];
		if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= m && !visited[i1][j1]){
			q.push({i1, j1});
			visited[i1][j1] = true;
			d[i1][j1] = d[top.first][top.second] + 1;
		}
		int i2 = top.first + a[top.first][top.second], j2 = top.second;
		if(i2 >= 1 && j2 >= 1 && i2 <= n && j2 <= m && !visited[i2][j2]){
			q.push({i2, j2});
			visited[i2][j2] = true;
			d[i2][j2] = d[top.first][top.second] + 1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		memset(visited, false, sizeof(visited));
		bfs(1, 1);
		if(!visited[n][m]) cout << "-1" << endl;
		else cout << d[n][m] << endl;
	}
}