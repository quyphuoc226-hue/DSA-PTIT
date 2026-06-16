#include <bits/stdc++.h>
using namespace std;
int n, k, a[100000], A[100000];
bool check() {
	for(int i = 1; i <= k-1; i++) {
		if(A[a[i]] > A[a[i+1]]) return false;
	}
	return true;
}
int cnt = 0;
void Try(int i) {
	for(int j = a[i-1] + 1; j <= n - k + i; j++) {
		a[i] = j;
		if(i == k) {
			if(check()) {
				cnt++;
			}
		} else Try(i+1);
	}
}

int main() {
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> A[i];
	}
	Try(1);
	cout << cnt;
}