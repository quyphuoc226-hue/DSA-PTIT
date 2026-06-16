#include <bits/stdc++.h>
using namespace std;
void Solve() {
	int n;
	cin >> n;
	int a[n + 1], dp[n + 1];
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
//	dp[i] : tổng của dãy con lớn nhất kết thúc tại a[i]
	dp[0] = 0;
	for(int i = 1; i <= n; i++) {
		dp[i] = max(a[i], dp[i - 1] + a[i]);
	}
	cout << *max_element(dp, dp + n + 1) << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		Solve();
	}
}