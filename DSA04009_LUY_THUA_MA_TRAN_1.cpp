#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;
long long n;

struct matran{
	long long a[15][15];
	friend matran operator * (matran x, matran y){
		matran res;
		for(long long i = 0; i < n; i++){
			for(long long j = 0; j < n; j++){
				res.a[i][j] = 0;
				for(long long k = 0; k < n; k++){
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
	if(n % 2 == 0)
		return X * X;
	else 
		return X * X * x;
}

void Solve(){
	long long k;
	cin >> n >> k;
	matran x;
	for(long long i = 0; i < n; i++){
		for(long long j = 0; j < n; j++){
			cin >> x.a[i][j];
		}
	}
	matran res = binpow(x, k);
	for(long long i = 0; i < n; i++){
		for(long long j = 0; j < n; j++){
			cout << res.a[i][j] << " ";
		}
		cout << endl;
	}
}
main(){
	long long t;
	cin >> t;
	while(t--){
		Solve();
	}
}