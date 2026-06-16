#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        bool ok = false;
        for(int i = 0; i < n; i++){
            if(mp[a[i]] >= 2){
                ok = true;
                cout << a[i] << endl;
                break;
            }
        }
        if(!ok) cout << "NO" << endl;
    }
}