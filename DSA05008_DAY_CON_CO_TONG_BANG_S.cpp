#include <bits/stdc++.h>
using namespace std;
bool dp[40001];	// dp[i] : có thể tạo ra tổng bằng i hay không
void Solve(){
	memset(dp, false, sizeof(dp));
    int n, s;
    cin >> n >> s;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    dp[0] = true; // Base case
	for(int i = 1; i <= n; i++){
		for(int j = s; j >= 0; j--){
			if(dp[j] && j + a[i] <= s){
				dp[j + a[i]] = true;
			}
		}
	}
	if(dp[s]) cout << "YES";
	else cout << "NO";
	cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}