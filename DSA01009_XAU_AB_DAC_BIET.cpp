#include <bits/stdc++.h>
int n, k, a[100000];
using namespace std;
vector<string> res;
bool check() {
	int cnt = 0, dem = 0;
	for(int i = 1; i <= n; i++) {
		if(a[i]) cnt++;
		else cnt = 0;
        if(cnt > k) return false;
        if(cnt == k) dem++;
        
	}
	if(dem == 1) return true;
	else return false;
}
void Try(int i) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n) {
			if(check()) {
				string temp = "";
				for(int i = 1; i <= n; i++) {
					if(a[i]) temp+="A";
					else temp+="B";
				}
				res.push_back(temp);
			}
		} else Try(i+1);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> k;
	Try(1);
	cout << res.size() << endl;
	sort(res.begin(), res.end());
	for(auto x : res){
		cout << x << endl;
	}
}