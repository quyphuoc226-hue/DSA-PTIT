#include <bits/stdc++.h>
using namespace std;
long long find(long long n, long long k){
    if(k == pow(2, n - 1)) return n;
    if(k > pow(2, n - 1)) return find(n - 1, k - pow(2, n - 1));
    if(k < pow(2, n - 1)) return find(n - 1, k);
}
main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        cout << find(n, k) << endl;
    }
}