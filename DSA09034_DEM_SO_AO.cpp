#include <bits/stdc++.h>
using namespace std;
char a[105][105];
int dx[10] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[10] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m;
void dfs(int i, int j){
	a[i][j] = '.';
	for(int k = 0; k < 8; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'W'){
			dfs(i1, j1);
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <=m; j++){
			if(a[i][j] == 'W'){
				cnt++;
				dfs(i, j);
			}
		}
	}
	cout << cnt;
}