#include <bits/stdc++.h>
using namespace std;
int a[100000], n, k, A[100000];
int check(){
    for(int i = 1; i <= k - 1 ;i++){
        if(A[a[i]] > A[a[i+1]]) return 0;
    }
    return 1;
}
vector<string> res;
void inkq(){
    if(check()){
        if(k >= 2){
            string temp = "";          
            for(int i = 1; i <= k; i++){
                temp += to_string(A[a[i]]);
                temp+=" ";               
            }
            res.push_back(temp);
        }
    }
}
void Try(int i){
    for(int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k){
            inkq();
        }
        else Try(i+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> A[i];
    }    
    for(k = 1; k <= n; k++){
        Try(1);
    }
    sort(res.begin(), res.end());
    for(auto x : res){
        cout << x << endl;
    }
}