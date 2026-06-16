#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
vector<int> temp;
int n, K, a[25];
void Try(int pos, int remain){
	if(remain == 0){
		ans.push_back(temp);
	}
	for(int i = pos; i < n; i++){
		if(a[i] > remain) break;
		else {
			temp.push_back(a[i]);
			Try(i, remain - a[i]);
			temp.pop_back();
		}
	}
}
void Solve(){
	cin >> n >> K;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	ans.clear();
	temp.clear();
	Try(0, K);
	if(!ans.empty()){
		cout << ans.size() << " ";
		for(auto x : ans){
			cout << "{";
			for(int i = 0; i < x.size(); i++){
				if(i == x.size() - 1) cout << x[i] << "} ";
				else cout << x[i] << " ";
			}
		}
	}
	else cout << "-1";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
}