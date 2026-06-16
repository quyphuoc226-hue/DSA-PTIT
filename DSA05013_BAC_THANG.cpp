#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
void Solve(){
    int dp[100005];
    int n, k;
    cin >> n >> k;
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            if(i >= j){
                dp[i] = (dp[i] + dp[i - j]) % MOD;
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