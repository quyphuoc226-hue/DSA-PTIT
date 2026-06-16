#include <bits/stdc++.h>
using namespace std;
int n, k, a[100000], ok;
void next() {
	int i = k;
	while(i>=1 && a[i] == n-k+i) {
		i--;
	}
	if(i==0) {
		ok = 0;
	} else {
		a[i]++;
		for(int j = i+1 ; j<=n-k+i; j++) {
			a[j] = a[j-1] +1;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		int A[k+1];
		for(int i=1; i<=k; i++) {
			cin >> a[i];
			A[i] = a[i];
		}
		ok=1;
		next();
		if(!ok) cout << k << endl;
		else {
			int cnt = 0;
			set<int> s;
			for (int i = 1; i<=k; i++) {
				s.insert(A[i]);
			}
			for(int i=1;i<=k;i++){
				if(s.count(a[i]) == 0 ) cnt++;
			}
			cout << cnt << endl;
		}
	}
    return 0;
}