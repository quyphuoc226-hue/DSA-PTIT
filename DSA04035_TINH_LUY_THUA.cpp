#include <bits/stdc++.h>
using namespace std;
long long a, b;
long long mod = 1e9 + 7;
long long binpow(long long a, long long b){
	if(b == 0) return 1;
	long long x = binpow(a, b / 2);
	x %= mod;
	if(b % 2 == 0) return (x * x) % mod;
	else return ((x * x) % mod * a) % mod; 
}
int main(){
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		else cout << binpow(a, b) << endl;
	}
}