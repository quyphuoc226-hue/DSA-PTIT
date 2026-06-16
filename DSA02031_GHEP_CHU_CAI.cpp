#include <bits/stdc++.h>
using namespace std;
string s;
char c;
void ktao() {
	for(int i = 'A'; i <= c; i++) {
		s += i;
	}
}
bool NguyenAm(char c){
	if(c == 'A' || c == 'E') return true;
	else return false;
}
bool check() {
	for(int i = 0; i < s.size() - 2; i++){
		if(!NguyenAm(s[i]) && NguyenAm(s[i+1]) && !NguyenAm(s[i+2])){
			return false;
		}
	}
	return true;
}
//int cnt = 0;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> c;
	ktao();
	do {
		if(check()) {
			//cnt++;
			cout << s << endl;
		}
	} while(next_permutation(s.begin(), s.end()));
	//cout << cnt;
}