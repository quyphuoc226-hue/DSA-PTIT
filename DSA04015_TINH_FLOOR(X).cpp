#include <bits/stdc++.h>
using namespace std;

int Find(int a[], int l, int r, int k){
	if(l > r) return -1;
	int m = (l + r) / 2;
	if(a[m] == k) return m;
	if(a[m] > k) return Find(a, l, m - 1, k);
	if(a[m] < k) return Find(a, m + 1, r, k); 
}

void Solve(){
	int n, k;
	cin >> n >> k;
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	if(k <= a[1]){
		cout << "-1" << endl;
		return;
	}
	else {
		if(Find(a, 1, n, k) != -1){
			cout << Find(a, 1, n, k) << endl;
			return;
		} 
		while(k--){
			if(Find(a, 1, n, k) != -1){
				cout << Find(a, 1, n, k) << endl;
				return;
			}
		}
		
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
}