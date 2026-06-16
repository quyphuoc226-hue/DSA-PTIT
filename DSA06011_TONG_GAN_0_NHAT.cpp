#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> res;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                res.push_back(a[i] + a[j]);
            }
        }   
        int MIN = 1e9;     
        for(auto x : res){
            if(abs(x) < abs(MIN)){
                MIN = x;
            }
        }
        cout << MIN << endl;
    }
}