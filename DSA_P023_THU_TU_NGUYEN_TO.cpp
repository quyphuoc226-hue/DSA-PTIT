#include <bits/stdc++.h>
using namespace std;
int prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int n, k, a[25], cnt = 0;
void inkq(){
    if(prime(cnt)){
        cout << cnt << ": ";
        for(int i = 1; i <= k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
void Try(int i){
    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k){
            cnt++;
            inkq();
        }
        else Try(i + 1);
    }
}
int main(){
    cin >> n >> k;
    Try(1);
}