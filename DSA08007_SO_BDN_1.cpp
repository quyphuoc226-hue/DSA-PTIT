#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void Solve(){
	queue<string> q;
	q.push("1");
	ans.push_back("1");
	while(true){
		string top = q.front();
		q.pop();
		if(top.size() == 20) break;
		q.push(top + "0");
		q.push(top + "1");
		ans.push_back(top + "0");
		ans.push_back(top + "1");
	}
}
int main(){
	int t;
	cin >> t;
	Solve();
	while(t--){
		int n;
		cin >> n;
		int cnt = 0;
		for(auto x : ans){
			if(stoll(x) <= n) cnt++;
			else break;
		}
		cout << cnt << endl;
	}
}