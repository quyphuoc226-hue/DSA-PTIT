#include <bits/stdc++.h>
using namespace std;
int n, a[100005], x;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
void Solve(int a[], int n, int x){
    vector<pair<int, int>> res;
    for(int i = 0; i < n; i++){
        res.push_back({a[i], abs(x - a[i])});
    }
    stable_sort(res.begin(), res.end(), cmp);
    for(auto x : res){
        cout << x.first << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        Solve(a, n, x);
    }
}

//Bài này phải dùng stable_sort thì mới AC.