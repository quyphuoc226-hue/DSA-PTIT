#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll F[100];
void fi(){
	F[1] = 1;
	F[2] = 1;
	for(int i = 3; i <= 92; i++){
		F[i] = F[i - 1] + F[i - 2];
	}
}
int Find(ll n, ll k){
	if(n == 1) return 0;
	if(n == 2) return 1;
	if(k > F[n - 2]) return Find(n - 1, k - F[n - 2]);
	else return Find(n - 2, k);
}
int main(){
	fi();
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << Find(n, k) << endl;
	}	
}