#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> q;
        q.push("9");
        int ok = 0;
        while(!ok){
            string top = q.front();
            q.pop();
            long long k = stoll(top);
            if(k % n == 0){
                cout << k;
                ok = 1;
            }
            q.push(top + "0");
            q.push(top + "9");
        }
        cout << endl;
    }
}