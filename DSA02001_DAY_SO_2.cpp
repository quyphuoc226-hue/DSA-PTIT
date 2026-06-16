#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1], A[n+1][n+1];
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        for(int j = 1;j<=n;j++){
            A[1][j] = a[j];
        }
        for(int i = 2;i<=n;i++){
            for(int j = 1;j<=n;j++){
                A[i][j] = A[i-1][j] + A[i-1][j+1];
            }
        }
        for(int i=n;i>=1;i--){
            cout << "[";
            for(int j = 1;j<=n-i+1;j++){
                if(j == n-i+1) cout << A[i][j];
                else cout << A[i][j] << " ";
            }
            cout << "]";
            cout << " ";
        }
        cout << endl;
    }
}