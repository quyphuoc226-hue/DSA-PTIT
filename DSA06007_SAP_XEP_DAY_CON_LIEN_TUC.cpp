#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        int b[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a + 1, a + n + 1);
        for(int i = 1; i <= n; i++){
            if(a[i] != b[i]){
                cout << i << " ";
                break;
            }
        }
        for(int i = n; i >= 1; i--){
            if(a[i] != b[i]){
                cout << i << endl;
                break;
            }
        }
    }    
}