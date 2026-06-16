#include <bits/stdc++.h>
using namespace std;
int a[105], n;
vector<vector<int>> res;
void SelectionSort(int a[], int n){
    res.push_back({a[0]});
    for(int i = 1; i < n; i++){
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        vector<int> temp;
        for(int j = 0; j <= i; j++){
            temp.push_back(a[j]);
        }
        res.push_back(temp);
    }
    for(int j = res.size() - 1; j >= 0; j--){
        cout << "Buoc " << j << ": ";
        for(auto x : res[j]){
            cout << x << " ";
        }
        cout << endl;
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    SelectionSort(a, n);
}