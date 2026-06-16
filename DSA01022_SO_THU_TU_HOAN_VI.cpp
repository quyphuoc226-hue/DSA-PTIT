#include <bits/stdc++.h>
using namespace std;
int n, a[100000], used[100000], A[100000];
int cnt = 0;
bool check(){
    for(int i = 1;i<=n;i++){
        if(a[i] != A[i]) return false;
    }
    return true;
}
void Try(int i){
        for(int j=1;j<=n;j++){
            if(!used[j]){
                a[i] = j;
                used[j] = 1;
                if(i==n){
                    cnt++;
                    if(check()){
                        cout << cnt;
                    }
                }
                else Try(i+1);
                used[j] = 0;
            }
        } 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> A[i];
        }
        Try(1);
        cnt = 0;
        cout << endl;
    }
}