#include <bits/stdc++.h>
using namespace std;
int Find(int a[], int l, int r, int n){
	if (l > r) return n + 1;
	int m = (l + r) / 2;
	if(a[m] == 0) return Find(a, m + 1, r, n);
	if(a[m] == 1) return min(m, Find(a, l, m - 1, n));
}

void Solve(){
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	cout << Find(a, 1, n, n) - 1 << endl;
	
}
main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}	
}