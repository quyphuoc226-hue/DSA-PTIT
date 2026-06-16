#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}
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
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), cmp);
        if(v[0].second > n / 2) cout << v[0].first << endl;
        else cout << "NO" << endl;
    }
}