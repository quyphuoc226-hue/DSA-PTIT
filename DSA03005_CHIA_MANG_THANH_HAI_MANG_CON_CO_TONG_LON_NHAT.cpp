#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int MIN = min(n-k, k);
        int Tong_min = 0;
        int Tong_max = 0;
        for(int i=0;i<MIN;i++){
            Tong_min+=a[i];
        }
        for(int i=MIN;i<n;i++){
            Tong_max+=a[i];
        }
        cout << abs(Tong_min - Tong_max) << endl;
    }
}