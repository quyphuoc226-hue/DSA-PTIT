#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> giao;
        vector<int> hop;
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(giao));
        set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(hop));
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