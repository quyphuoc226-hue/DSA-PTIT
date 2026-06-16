#include <bits/stdc++.h>
using namespace std;
int n;
string s;
void ktao() {
	for(int i = 0; i < n; i++) {
		s += to_string(i+1);
	}
}
bool check() {
	for(int i = 0; i < s.size() - 1; i++) {
		if(abs((s[i] - '0') - (s[i+1] - '0')) == 1) return false;
	}
	return true;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) {
		s = "";
		cin >> n;
		ktao();
		do {
			if(check())
			cout << s << endl;
		} while(next_permutation(s.begin(), s.end()));
		cout << endl;
	}
}