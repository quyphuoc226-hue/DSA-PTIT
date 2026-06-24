#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        int ok = 1;
        for(int i = 0; i < n - 1; i++){
            if(a[i] == a[i + 1]) ok = 0;
        }
        sort(a, a + n);
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]) ok = 0;
        }
        if(ok) cout << "1";
        else cout << "0";
        cout << endl;
    }
}