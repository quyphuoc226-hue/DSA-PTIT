#include <bits/stdc++.h>
using namespace std;
int n, a[100000];
bool check(){
    if(a[1] != 1 || a[n] != 0) return false;
    for(int i = 1;i<n;i++){
        if(a[i+1] == 1 && a[i] == 1) return false;
    }
    for(int i = 1;i <= n-3;i++){
        if(a[i] == a[i+1] && a[i+1] == a[i+2] && a[i+2] == a[i+3] && a[i] == 0) return false;
    }
    return true;
}
void inkq(){
    if(check()){
        for(int i=1;i<=n;i++){
            if(a[i]) cout << "8";
            else cout << "6";
        }
        cout << endl;
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i] = j;
        if(i == n){
            inkq();
        }
        else Try(i+1);
    }
}
int main(){
    cin >> n;
    Try(1);
}