#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        priority_queue<long long, vector<long long>, greater<long long>> q;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            q.push(x);
        }
        long long ans = 0;
        while(q.size() > 1){
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            ans+= a+b;
            q.push(a+b);
        }
        cout << ans << endl;
    }
}