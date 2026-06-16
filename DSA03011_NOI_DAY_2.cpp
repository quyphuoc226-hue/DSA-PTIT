#include <bits/stdc++.h>
using namespace std;
const long long BASE = 1e9 + 7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        priority_queue<long long, vector<long long>, greater<long long>> Q;
        for(long long i=0;i<n;i++){
            long long x;
            cin >> x;
            Q.push(x);
        }
        long long res = 0;
        while(Q.size()!=1){
            long long x = Q.top();
            Q.pop();
            long long y = Q.top();
            Q.pop();
            long long sum = x + y;
            res += sum;
            res %= BASE;
            sum %= BASE;
            Q.push(sum);
        }
        cout << res << endl;
    }
}