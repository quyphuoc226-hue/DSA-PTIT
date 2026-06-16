#include <bits/stdc++.h>
using namespace std;
int nt[1000005];
int MAX = 1000000;
int s, p, n, a[20], k;
vector<int> A;
vector<vector<int>> ans;
void Sang() {
	for(int i = 0; i <= MAX; i++) {
		nt[i] = 1;
	}
	nt[0] = 0;
	nt[1] = 0;
	for(int i = 2; i <= sqrt(MAX); i++) {
		if(nt[i]) {
			for(int j = i * i; j <= MAX; j += i) {
				nt[j] = 0;
			}
		}
	}
}
bool check() {
	int tong = 0;
	for(int i = 1; i <= k; i++) {
		tong += A[a[i]];
	}
	if(tong == s) return true;
	else return false;
}
void inkq() {
	if(check()) {
		vector<int> temp;
		for(int i = 1; i <= k; i++){
			temp.push_back(A[a[i]]);
		}
		ans.push_back(temp);
	}
}
void Try(int i) {
	for(int j = a[i - 1] + 1; j <= n - k + i; j++) {
		a[i] = j;
		if(i == k) {
			inkq();
		} else Try(i + 1);
	}
}
void Solve() {
	cin >> k >> p >> s;
	A.push_back(0);
	for(int i = p + 1; i <= s; i++) {
		if(nt[i]) A.push_back(i);
	}
	n = A.size() - 1;
	Try(1);
	cout << ans.size() << endl;
	for(auto x : ans){
		for(auto y : x){
			cout << y << " ";
		}
		cout << endl;
	}
	ans.clear();
	A.clear();
}
int main() {
	int t;
	cin >> t;
	Sang();
	while(t--) {
		Solve();
	}
}