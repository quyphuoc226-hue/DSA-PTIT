#include <bits/stdc++.h>
using namespace std;

void Solve(){
    string s;
    cin >> s;
    int dp[50]; // dp[i]: số cách để giải mã đoạn dài i
    int M[50];
    for(int i = 0; i < s.size(); i++){
        M[i + 1] = s[i] - '0';
    }
    if(M[1] != 0) dp[1] = 1;
    else dp[1] = 0;
    dp[0] = 1;
    for(int i = 2; i <= s.size(); i++){
        dp[i] = 0;
        if(M[i] != 0){
            dp[i] += dp[i - 1];
        }
        if(M[i - 1] * 10 + M[i] >= 10 && M[i - 1] * 10 + M[i] <= 26){
            dp[i] += dp[i - 2];
        }
    }
    cout << dp[s.size()] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}