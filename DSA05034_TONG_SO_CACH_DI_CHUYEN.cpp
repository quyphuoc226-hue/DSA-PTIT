#include <bits/stdc++.h>
using namespace std;
int n, k;
int dp[100005]; // dp[i]: số bước đi đến bậc i.
const int MOD = 1e9 + 7;
void Solve(){
	cin >> n >> k;
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= k; j++){
			if(i >= j){
				dp[i] += dp[i - j];
				dp[i] %= MOD;
			}
		}
	}
	cout << dp[n] << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
}