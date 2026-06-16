#include <bits/stdc++.h>
using namespace std;
int a[105], n;
vector<vector<int>> res;
void InterchangeSort(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
        vector<int> temp(a, a + n);
        res.push_back(temp);
    }
    for(int j = res.size() - 1; j >= 1; j--){
        cout << "Buoc " << j << ": ";
        for(auto x : res[j - 1]){
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
    InterchangeSort(a, n);
}