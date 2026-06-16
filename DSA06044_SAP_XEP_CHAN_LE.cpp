#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	vector<int> chan;
	vector<int> le;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0) chan.push_back(a[i]);
		else le.push_back(a[i]); 
	}
    sort(le.begin(), le.end());
	sort(chan.begin(), chan.end(), greater<int>());
	int i = 0, j = 0;
	for(int I = 1; I <= n; I++){
		if(I % 2 == 0){
			cout << chan[i++] << " ";
		}else {
			cout << le[j++] << " ";
		}
	}
}