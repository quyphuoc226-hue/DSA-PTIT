#include <bits/stdc++.h>
using namespace std;
int n, m;
int res[1000000];
void Merge(int a[], int b[], int n, int m){
	vector<int> temp;
	int i = 0, j = 0;
	while(i < n && j < m){
		if(a[i] < b[j]) temp.push_back(a[i++]);
		else temp.push_back(b[j++]);
	}
	while(i < n) temp.push_back(a[i++]);
	while(j < m) temp.push_back(b[j++]);
	for(int k = 0; k < temp.size(); k++){
		res[k] = temp[k];
	}
}
void Solve(){
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[m];
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	Merge(a, b, n, m);
	cout << res[k - 1] << endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
}