#include <bits/stdc++.h>
using namespace std;
int dp[105][25001]; //dp[i][j]: khối lượng lớn nhất khi chọn i con bò và khối lượng còn lại j
int main(){
    int n, c;
    cin >> c >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= c; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= c; j++){
            dp[i][j] = dp[i - 1][j];
            if(a[i] <= j){
                dp[i][j] += a[i]; 
            }
        }
    }
    cout << dp[n][c] << endl;
}