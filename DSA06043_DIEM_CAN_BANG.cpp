#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int tong = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            tong += a[i];
        }
        int left = a[0];
        bool ok = false;
        for(int i = 1; i < n; i++){
            if(left == tong - left - a[i]){
                ok = true;
                cout << i + 1 << endl;
                break;
            }
            left += a[i];
        }
        if(!ok) cout << "-1" << endl;
    }
}