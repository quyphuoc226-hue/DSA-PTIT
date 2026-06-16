#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        map<char, int> temp;
        for(int i=0;i<s.size();i++){
            temp[s[i]]++;
        }
        vector<pair<char, int>> v(temp.begin(), temp.end());
        priority_queue<int> Q;
        for(int i=0;i<v.size();i++){
            Q.push(v[i].second);
        }
        for(int i=0;i<k;i++){
            int x = Q.top();
            Q.pop();
            Q.push(x-1);
        }
        int res = 0;
        while(!Q.empty()){
            res += Q.top() * Q.top();
            Q.pop();
        }
        cout << res;
        cout << endl;
    }
}