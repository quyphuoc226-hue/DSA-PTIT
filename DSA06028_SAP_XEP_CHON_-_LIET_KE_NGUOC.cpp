#include <bits/stdc++.h>
using namespace std;
int a[105], n;
vector<vector<int>> res;
void SelectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_pos = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);
        vector<int> temp(a, a + n);
        res.push_back(temp);
    }
    for(int j = res.size(); j >= 1; j--){
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
    SelectionSort(a, n);
}