#include <bits/stdc++.h>
using namespace std;
int n, a[100005];
void Merge(int a[], int l, int m, int r){
	vector<int> temp;
	int i = l, j = m + 1;
	while(i <= m && j <= r){
		if(a[i] <= a[j]) temp.push_back(a[i++]);
		else temp.push_back(a[j++]);
	}
	while(i <= m) temp.push_back(a[i++]);
	while(j <= r) temp.push_back(a[j++]);
	for(int k = 0; k < temp.size(); k++){
		a[l + k] = temp[k];
	}
}
void MergeSort(int a[], int l, int r){
	if(l >= r) return;
	int m = (l + r) / 2;
	MergeSort(a, l, m);
	MergeSort(a, m + 1, r);
	Merge(a, l, m, r);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		MergeSort(a, 0, n - 1);
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
