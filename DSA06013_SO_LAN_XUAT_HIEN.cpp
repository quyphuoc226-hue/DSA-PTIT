#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[a[i]]++;
        }
        if(mp[x]) cout << mp[x];
        else cout << "-1";
        cout << endl;
    }
}