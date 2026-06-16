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
	if(k == pow(2, n - 1)) return n;
	else if(k > pow(2, n - 1)) return Find(n - 1, k - pow(2, n - 1));
	else return Find(n - 1, k);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << char(Find(n, k) + 64) << endl;
	}	
}