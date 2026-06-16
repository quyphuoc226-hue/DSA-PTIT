#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ,m, k;
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        for(int i = 0;i<m;i++){
            cin >> b[i];
        }
        for(int i=0;i<k;i++){
            cin >> c[i];
        }
        int i = 0, j = 0, l = 0;
        vector<int> res;
        while(i<n && j < m && l < k){
            int MIN = min(min(a[i], b[j]), c[l]);
            if(MIN == a[i] && MIN == b[j] && MIN == c[l]){
                i++;
                j++;
                l++;
                res.push_back(MIN);
            }
            else{
                if(MIN == a[i]) i++;
                if(MIN == b[j]) j++;
                if(MIN == c[l]) l++;
            }          
        }
        if(res.size() == 0) cout << "NO";
        else {
            for(auto x : res){
                cout << x << " ";
            }
        }
        cout << endl;
    }
}