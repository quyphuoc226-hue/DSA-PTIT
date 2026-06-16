#include <bits/stdc++.h>
using namespace std;
int n;
int a[105];
vector<vector<int>> res;
void InverseBubbleSort(int a[], int n){
    res.clear();
    bool ok;
    for(int i = 1; i <= n; i++){
        ok = true;
        for(int j = 0; j < n - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                ok = false;
            }
        }
        if(ok) break;
        vector<int> temp(a, a + n);
        res.push_back(temp);
    }
    reverse(res.begin(), res.end());
    int k = res.size();
    for(auto x : res){
        cout << "Buoc " << k << ": ";
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
        k--;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--){

        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        InverseBubbleSort(a, n);
    }
}