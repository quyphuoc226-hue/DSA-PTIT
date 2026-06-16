#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000005];
long long dp[1000005]; // dp[i]: giá trị lớn nhất tên trộm thu được từ đầu đến i.
void Solve(){
    memset(dp, 0, sizeof(dp));
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    dp[0] = 0;
    dp[1] = a[1];
    for(int i = 2; i <= n; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    }
// Nếu không lấy ở nhà i thì MAX = MAX của nhà i - 1
// Nếu lấy ở nhà i thì MAX = MAX của nhà i - 1 cộng với gtri của nhà i
    cout << dp[n] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}