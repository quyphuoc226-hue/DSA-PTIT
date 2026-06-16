#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dp[n];
    for(int i = 0; i < n; i++){
        dp[i] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] > a[i]){
                dp[j] = max(dp[i] + 1, dp[j]);
            }
        }
    }
    cout << *max_element(dp, dp + n);
}