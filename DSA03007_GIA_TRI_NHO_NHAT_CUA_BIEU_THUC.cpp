#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long A[n], B[n];
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        for(int i=0;i<n;i++){
            cin >> B[i];
        }
        sort(A, A+n);
        sort(B, B+n);
        reverse(A, A+n);
        long long tong = 0;
        for(int i=0;i<n;i++){
            tong += A[i] * B[i];
        }
        cout << tong << endl;
    }
}