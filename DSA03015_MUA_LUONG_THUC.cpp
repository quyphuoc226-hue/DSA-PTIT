#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, s;
        cin >> n >> s >> m;
        int canBuy = s - s/7;
        int total = canBuy * n;
        int need = m * s;
        if(total < need || m > n){
            cout << "-1";
        }
        else {
            if(need % n ==0) cout << need / n;
            else cout << need / n + 1;
        }
        cout << endl;
    }
}