#include <bits/stdc++.h>
using namespace std;
int a[100000], A[100000];
bool check(){
    if(a[1] == 0 && a[2] == 0) return false;
    if(a[3] == 1) return false;
    if(a[3] == 0 && a[4] == 0) return false;
    if(a[5] == 0) return false;
    return true;  
}
void inkq(){
    if(check()){
        for(int i=1;i<=8;i++){
            if(a[i]){
                a[i] = 2;
            }
            else a[i] = 0;
            if(i==2 || i==4) cout << a[i] << "/";
            else cout << a[i];
        }
        cout << endl;
    }
}
void Try(int i){
    for(int j = 0;j<=1;j++){
        a[i] = j;
        if(i==8){
            inkq();
        }
        else Try(i+1);
    }
}
int main(){
    Try(1);
}