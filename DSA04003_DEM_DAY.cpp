#include <bits/stdc++.h>
using namespace std;
long long mod = 123456789;
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
        long long k;
        cin >> k;
        cout << luythua(2, k - 1) << endl;
    }
}