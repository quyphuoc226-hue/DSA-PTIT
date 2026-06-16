#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005]; // dp[i][j]: giá trị của C(i , j)
const int MOD = 1e9 + 7;
void Solve(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(j == 0 || j == i){
                dp[i][j] = 1;
            }
        }
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            dp[i][j] %= MOD;
        }
    }
    cout << dp[n][k] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}