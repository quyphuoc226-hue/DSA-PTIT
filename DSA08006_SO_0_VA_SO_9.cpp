#include <bits/stdc++.h>
using namespace std;
vector<long long> res;
long long a[105];
void init(){
    queue<string> q;
    q.push("9");
    res.push_back(9);
    while(1){
        string top = q.front();
        q.pop();
        if(top.length() == 10) break;
        q.push(top + "0");
        q.push(top + "9");
        res.push_back(stoll(top + "0"));
        res.push_back(stoll(top + "9"));
    }
    for(int i=1;i<=100;i++){
        for(auto x : res){
            if(x % i==0){
                a[i] = x;
                break;
            }
        }
    }

}
int main(){
	init();
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << a[n];
		cout << endl;
	}
}