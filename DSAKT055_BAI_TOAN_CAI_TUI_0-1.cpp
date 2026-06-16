#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
void Solve(){
    memset(dp, 0, sizeof(dp));
    int n, v;
    cin >> n >> v;
    int a[n + 1], c[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> c[i];
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= v; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= v; j++){
            dp[i][j] = dp[i - 1][j];
            if(j >= a[i]){
                dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + c[i]);
            }
        }
    }
    cout << dp[n][v] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    } 
}