#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9 + 7;
struct matran{
	long long a[2][2];
	friend matran operator * (matran x, matran y){
		matran res;
		for(long long i = 0; i < 2; i++){
			for(long long j = 0; j < 2; j++){
				res.a[i][j] = 0;
				for(long long k = 0; k < 2; k++){
					res.a[i][j] += x.a[i][k] * y.a[k][j];
					res.a[i][j] %= MOD;	
				}
			}
		}
		return res;
	}
};

matran binpow(matran x, long long n){
	if(n == 1) return x;
	matran X = binpow(x, n / 2);
	if(n % 2 == 0) return X * X;
	else return X * X * x;
}

void Solve(){
	long long n;
	cin >> n;
	matran x;
	x.a[0][0] = 1;
	x.a[0][1] = 1;
	x.a[1][0] = 1;
	x.a[1][1] = 0;
	matran res = binpow(x, n);
	cout << res.a[0][1] << endl;
}
main(){
	long long t;
	cin >> t;
	while(t--){
		Solve();
	}
}