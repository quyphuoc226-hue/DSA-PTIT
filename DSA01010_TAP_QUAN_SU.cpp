#include <bits/stdc++.h>
using namespace std;
int a[100000], n, k;
set<int> s;
void ktao(){
	for(int i = 1; i <= k; i++){
		cin >> a[i];
		s.insert(a[i]);
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) {
		cout << k;
	}
	else {
		a[i]++;
		for(int j = i + 1; j <= n - k + i; j++){
			a[j] = a[j-1] + 1;
		} 
		int cnt = 0;
		for(int i = 1; i <= k; i++){
			if(!s.count(a[i])) cnt++;
		}
		cout << cnt;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		s.clear();
		cin >> n >> k;
		ktao();
		sinh();
		cout << endl;
	}
}