#include <bits/stdc++.h>
using namespace std;
int n, a[15];
void inkq(){
    for(int i = 1; i <= n; i++){
        if(a[i]) cout << "B";
        else cout << "A";
    }
    cout << " ";
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            inkq();
        }
        else Try(i + 1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }
}