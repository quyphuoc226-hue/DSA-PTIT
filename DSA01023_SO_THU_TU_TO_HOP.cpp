#include <bits/stdc++.h>
using namespace std;
int n, k, a[20], A[20];
int cnt;
void inkq(){
    cnt++;
    bool ok = true;
    for(int i = 1; i <= k; i++){
        if(a[i] != A[i]){
            ok = false;
            break;
        }
    }
    if(ok) cout << cnt << endl;
}
void Try(int i){
    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k){
            inkq();
        }
        else Try(i + 1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> A[i];
        }
        cnt = 0;
        Try(1);
    }
}