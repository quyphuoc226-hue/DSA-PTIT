#include <bits/stdc++.h>
using namespace std;
int n, a[100000], A[100000], used[100000];
void inkq(){
    for(int i=1;i<=n;i++){
        cout << A[a[i]] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!used[j]){
            a[i] = j;
            used[j] = 1;
            if(i==n){
                inkq();
            }
            else Try(i+1);
            used[j] = 0;
        }
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> A[i];
    }
    sort(A+1, A+n+1);
    Try(1);
}