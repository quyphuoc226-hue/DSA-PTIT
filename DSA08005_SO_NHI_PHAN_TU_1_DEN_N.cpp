#include <bits/stdc++.h>
using namespace std;
vector<string> res;
void init(){
    res.push_back("");
    queue<string> q;
    q.push("1");
    while(res.size() <= 10005){
        string top = q.front();
        res.push_back(top);
        q.pop();
        q.push(top + "0");
        q.push(top + "1");
    }
}
int main(){
    int t;
    cin >> t;
    init();
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
}