#include <bits/stdc++.h>
using namespace std;
int n;
int dp[100005]; // dp[i]: Số bước ít nhất để đưa i về 1.
void Solve(){
	cin >> n;
	dp[1] = 0;
	for(int i = 2; i <= n; i++){
		dp[i] = dp[i - 1] + 1;
		if(i % 2 == 0){
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
		if(i % 3 == 0){
			dp[i] = min(dp[i], dp[i / 3] + 1);
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