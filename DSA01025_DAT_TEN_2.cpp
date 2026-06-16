#include <bits/stdc++.h>
using namespace std;
int n, k, a[100000];
char A[100000];
void inkq(){
    for(int i=1;i<=k;i++){
        cout << A[a[i]];
    }
    cout << "\n";
}
void Try(int i){
    for(int j = a[i-1] + 1; j<=n-k+i;j++){
        a[i] = j;
        if(i== k){
            inkq();
        }
        else Try(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i= 1;i<=n;i++){
            A[i] = char(i+64);
        }
        Try(1);
        cout << endl;
    }
}