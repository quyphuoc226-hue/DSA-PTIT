#include <bits/stdc++.h>
using namespace std;
long long dp[100];
void Solve(){
    memset(dp, 0, sizeof(dp));
    int n;
    cin >> n;
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3; j++){
            if(i >= j){
                dp[i] += dp[i - j];
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