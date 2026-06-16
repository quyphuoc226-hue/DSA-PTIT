#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        vector<int> giao;
        vector<int> hop;
        set_intersection(
            a, a + n,
            b, b + m,
            back_inserter(giao)
        );
        set_union(
            a, a + n,
            b, b + m,
            back_inserter(hop)
        );
        for(auto x : hop){
            cout << x << " ";
        }
        cout << endl;
        for(auto x : giao){
            cout << x << " ";
        }
        cout << endl;
    }
}