#include<bits/stdc++.h>
using namespace std;
int k, tong;
vector<int> a, b;
vector<vector<int>> res;
void ans(){
    int sum = 0;
    for(int i = 0; i < k; i++){
        if(a[i] == 1){
            sum += b[i];
        }
    }
    if(sum == tong){
         res.push_back(a);
    }
}
void Try(int n){
    for(int i = 0; i <= 1; i++){
        a[n] = i;
        if(n == k - 1){
            ans();
        }
        else Try(n + 1);
    }
}
int main(){
    cin >> k >> tong;
    a.resize(k, 0);
    b.resize(k, 0);
    for(int i = 0; i < k; i++){
        cin >> b[i];
    }
    Try(0);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            if(res[i][j] == 1){
                cout << b[j] << " ";
            }
        }
        cout << endl;
    }
    cout << res.size();
}