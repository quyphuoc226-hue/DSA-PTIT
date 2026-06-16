#include <bits/stdc++.h>
using namespace std;
long long cnt;
void Merge(int a[], int l, int m, int r){
	vector<int> temp;
	int i = l, j = m + 1;
	while(i <= m && j <= r){
		if(a[i] > a[j]){
			temp.push_back(a[j++]);
			cnt += m - i + 1;
		}
		else {
			temp.push_back(a[i++]);
		}
	}
	while(i <= m) temp.push_back(a[i++]);
	while(j <= r) temp.push_back(a[j++]);
	for(int k = 0; k < temp.size(); k++){
		a[l + k] = temp[k];
	}
}

void MergeSort(int a[], int l, int r){
	if(l >= r) return;
	int ans = 0;
	int m = (l + r) / 2;
	MergeSort(a, l, m);
	MergeSort(a, m + 1, r);
	Merge(a, l, m, r);
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		cnt = 0;
		MergeSort(a, 1, n);
		cout << cnt;
		cout << endl;
	}
}