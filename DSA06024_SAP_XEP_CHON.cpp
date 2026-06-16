#include <bits/stdc++.h>
using namespace std;
int n;
int a[105];
void SelectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_pos = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);
        cout << "Buoc " << i + 1 << ": ";
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
    SelectionSort(a, n);
}