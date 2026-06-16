#include <bits/stdc++.h>
using namespace std;

int Find(int A[], int a, int b, int k){
	if(a > b) return -1;
	int m = (a + b) / 2;
	if(A[m] == k) return m;
	else if(A[m] > k) return Find(A, a, m - 1, k);
	else if(A[m] < k) return Find(A, m + 1, b, k);
	else return -1;
}

void Solve(){
	int n, k;
	cin >> n >> k;
	int a[n + 1];
	for(int i = 1; i <= n; i++) cin >> a[i];
	if(Find(a, 1, n, k) == -1) cout << "NO";
	else cout << Find(a, 1, n, k);
	cout << endl;
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