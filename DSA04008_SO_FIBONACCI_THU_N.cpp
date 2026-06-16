#include <bits/stdc++.h>
using namespace std;
struct matran{
    long long a[2][2];
};
long long mod = 1e9 + 7;
matran operator * (matran x, matran y){
    matran res;
    for(long long i = 0; i < 2; i++){
        for(long long j = 0; j < 2; j++){
            res.a[i][j] = 0;
            for(long long k = 0; k < 2; k++){
                res.a[i][j] += x.a[i][k] * y.a[k][j];
                res.a[i][j] %= mod;
            }
        }
    }
    return res;
}
matran binpow(matran x, long long k){
    if(k == 1) return x;
    matran X = binpow(x, k / 2);
    if(k % 2 == 0) return X * X;
    else return X * X * x;
}
main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        matran x;
        x.a[0][0] = 1;
        x.a[0][1] = 1;
        x.a[1][0] = 1;
        x.a[1][1] = 0;
        matran res = binpow(x, n);
        cout << res.a[1][0] << endl;
    }
}