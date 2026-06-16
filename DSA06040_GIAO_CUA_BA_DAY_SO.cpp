#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        for(int i = 0; i < k; i++){
            cin >> c[i];
        }
        bool ok = false;
        int I = 0, J = 0, K = 0;
        while(I < n && J < m && K < k){
            int x = min(a[I], min(b[J], c[K]));
            if(x == a[I] && x == b[J] && x == c[K]){
                ok = true;
                cout << x << " ";
                I++;
                J++;
                K++;
            } else {
                if(x == a[I]) I++;
                if(x == b[J]) J++;
                if(x == c[K]) K++;
            }
        }
        if(!ok) cout << "-1";
        cout << endl;
    }
}