#include <bits/stdc++.h>
using namespace std;
int n, d[1005], w;
vector<string> res;
int c[105], a[105];
void kq(){
	string m = "";
	for(int i = 0; i < n; i++){
		m += to_string(d[i]);
	}
	res.push_back(m);
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		d[i] = j;
		if(i == n - 1){
			kq();
		}
		else Try(i+1);
	}
}
bool check(string s){
	int b = 0;
	for(int i = 0; i < s.size(); i++){
		b += a[i] * (s[i] - '0');
	}
	if(b > w) return false;
	else return true;
}
int cost(string s){
	int tong = 0;
	for(int i = 0; i < s.size(); i++){
		tong += c[i] * (s[i] - '0');
	}
	return tong;
}
string XOPT(string s){
	string xopt = "";
	for(auto x : s){
		xopt += x;
		xopt += " ";
	}
	return xopt;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
#ifndef ONLINE_JUDGE
freopen("data.in","r",stdin);
#endif

	cin >> n >> w;
	for(int i = 0; i < n; i++) {
		cin >> c[i];
	}
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Try(0);
	int fopt = -1;
	string xopt = "";
	for(auto x : res){
		if(check(x)){
			int fx = cost(x);
			if(fx > fopt){
				fopt = fx;
				xopt = XOPT(x);
			}
			
		}
	}
	cout << fopt << endl;
	cout << xopt;
}