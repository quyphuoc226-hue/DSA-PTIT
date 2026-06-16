#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        set<char> s;
        for(auto x : v){
            for(auto y : x){
                s.insert(y);
            }
        }
        for(auto x : s){
            cout << x << " ";
        }
        cout << endl;
    }
}