#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i].first;
        }
        for(int i = 0;i<n;i++){
            cin >> v[i].second;
        }
        sort(v.begin(), v.end(), cmp);
        int cnt = 1;
        int lastFinish = v[0].second;
        for(int i = 1;i<n;i++){
            if(lastFinish <= v[i].first){
                cnt++;
                lastFinish = v[i].second;
            }
        }
        cout << cnt << endl;
    }
}