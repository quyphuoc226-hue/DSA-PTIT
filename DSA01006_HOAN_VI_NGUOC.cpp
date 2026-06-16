#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            a[i] = i + 1;
        }
        vector<vector<int>> res;
        do {
            vector<int> temp (a, a + n);
            res.push_back(temp);
        } while(next_permutation(a, a + n));
        reverse(res.begin(), res.end());
        for(auto x : res){
            for(auto y : x){
                cout << y;
            }
            cout << " ";
        }
        cout << endl;
    }
}