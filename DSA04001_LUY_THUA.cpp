#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
long long luythua(long long n, long long k){
    if(k == 1) return n;
    long long x = luythua(n, k / 2);
    x %= mod;
    if(k % 2 == 0) return x * x % mod;
    else return x * x % mod * n % mod;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        cout << luythua(n, k) << endl;
    }
}