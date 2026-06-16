#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> q;
        vector<long long> ans;
        q.push("6");
        q.push("8");
        ans.push_back(6);
        ans.push_back(8);
        while(true){
            string top = q.front(); q.pop();
            if(top.size() == n) break;
            ans.push_back(stoll(top + "6"));
            ans.push_back(stoll(top + "8"));
            q.push(top + "6");
            q.push(top + "8");
        }
        cout << ans.size() << endl; 
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
}