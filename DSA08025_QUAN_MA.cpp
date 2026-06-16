#include <bits/stdc++.h>
using namespace std;
int dx[10] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[10] = {-1, 1, 2, 2, 1, -1, -2, -2};
bool visited[10][10];
int d[1001][1001];
void bfs(int i, int j) {
	queue<pair<int, int>> q;
	q.push({i, j});
	visited[i][j] = true;
	d[i][j] = 0;
	while(!q.empty()) {
		pair<int, int> top = q.front();
		q.pop();
		for(int k = 0; k < 8; k++) {
			int i1 = top.first + dx[k];
			int j1 = top.second + dy[k];
			if(i1 >= 1 && i1 <= 8 && j1 >= 1 && j1 <= 8 && !visited[i1][j1]) {
				d[i1][j1] = d[top.first][top.second] + 1;
				q.push({i1, j1});
				visited[i1][j1] = true;
			}
		}
	}
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		memset(visited, false, sizeof(visited));
//		memset(d, 0, sizeof(d));
		string s;
		getline(cin, s);
		int n,m,k,t;
		n = s[1] - '0';
		m = int(s[0]) - 96;
		k = s[4] - '0';
		t = int(s[3]) - 96;
		bfs(n, m);
		cout << d[k][t] << endl;
	}
}