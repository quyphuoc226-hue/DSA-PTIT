#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long t;
	cin >> t;
	while(t--){
		string s;
		long long k;
		cin >> k >> s;
		map<char, long long> mp;
		for(auto x : s){
			mp[x]++;
		}
		priority_queue<long long> q;
		long long res = 0;
		for(auto x : mp){
			q.push(x.second);
		}
		for(long long i = 1; i<= k; i++){
			long long first = q.top();
			q.pop();
			q.push(first - 1);
		}
		while(!q.empty()){
			res+=q.top() * q.top();
			q.pop();
		}
		cout << res << endl;
	}
}