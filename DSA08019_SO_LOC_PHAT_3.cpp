#include <bits/stdc++.h>
using namespace std;
vector<string> res;
void Solve(){
    queue<string> q;
    q.push("6");
    q.push("8");
    res.push_back("6");
    res.push_back("8");
    while(true){
        string top = q.front();
        q.pop();
        if(top.size() == 16) break;
        q.push(top + "6");
        q.push(top + "8");
        res.push_back(top + "6");
        res.push_back(top + "8");
    }
}
int main(){
    Solve();
    reverse(res.begin(), res.end());
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> ans;
        for(auto x : res){
            if(x.size() <= n){
                ans.push_back(x);
            }
        }
        cout << ans.size() << endl;
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
}