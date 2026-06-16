#include <bits/stdc++.h>
using namespace std;
int n;
int a[105];
void BubbleSort(int a[], int n) {
	bool ok;
	for(int i = 1; i <= n; i++) {
		ok = true;
		for(int j = 0; j < n - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				ok = false;
			}
		}
		if(ok) break;
		cout << "Buoc " << i << ": ";
		for(int j = 0; j < n; j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}
}
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	BubbleSort(a, n);
}