#include<bits/stdc++.h>
using namespace std;

int n, m;
int parent[1005], sz[1005];

void make_set(){
	for(int i = 1; i <= n; i++){
		parent[i] = i;
		sz[i] = 1;
	}
}

int find(int u){
	if(u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

bool Union(int u, int v){
	u = find(u);
	v = find(v);
	if(u == v) return false; // return false vì không thể gộp được 2 đỉnh u, v. 
	else {
		if(sz[u] < sz[v]) swap(u, v);
		parent[v] = u;
		sz[u] += sz[v];
	}
	return true;
}
// gộp được thì chắc chắn có chu trình nhưng không gộp được thì chưa chắc nên phải dùng continue chứ không được return luôn;
void Solve(){
	bool check = false;
	cin >> n >> m;
	make_set();
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		if(!Union(x, y)){
			check = true;
		} else continue;
	}
	if(check) cout << "YES";
	else cout << "NO";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
}