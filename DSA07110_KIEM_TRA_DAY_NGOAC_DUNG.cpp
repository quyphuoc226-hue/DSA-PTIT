#include <bits/stdc++.h>
using namespace std;
void solve() {
	string s;
	cin >> s;
	stack<char> st;
	for(auto x : s) {
		if(x == '(' || x == '[' || x == '{') st.push(x);
		else {
			if(st.empty()) {
				cout << "NO" << endl;
				return;
			} else {
				if(st.top() == '(' && x == ')' || st.top() == '[' && x == ']' || st.top() == '{' && x == '}') st.pop();
				else {
					cout << "NO" << endl;
					return;

				}
			}
		}
	}
	if(st.empty()) cout << "YES";
	else cout << "NO";
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}