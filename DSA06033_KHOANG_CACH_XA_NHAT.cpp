#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 1];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int LMin[n + 1], RMax[n + 1];
		LMin[1] = a[1];
		for (int i = 2; i <= n; i++) {
			LMin[i] = min(a[i], LMin[i - 1]);
		}
		RMax[n] = a[n];
		for (int i = n - 1; i >= 1; i--) {
			RMax[i] = max(a[i], RMax[i + 1]);
		}
		int i = 1, j = 1;
		int ans = -1;
		while (i <= n && j <= n) {
			if (LMin[i] >= RMax[j]) {
				i++;
			} else {
				ans = max(ans, j - i);
				j++;
			}
		}
		cout << ans << endl;
	}
}