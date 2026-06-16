#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	for(int i = 1; i<= t; i++){
		int n;
		cin >> n;
		string s;
		cin >> s;
		if(!next_permutation(s.begin(), s.end())) cout << i << " " << "BIGGEST";
		else{
			cout << i << " " << s;
		}
		cout << endl;
	}
}