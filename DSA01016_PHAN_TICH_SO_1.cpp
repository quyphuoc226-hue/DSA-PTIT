#include <bits/stdc++.h>
using namespace std;
int n, a[100000], cnt, ok;
void ktao(){
    a[1] = n;
    cnt = 1;
}
void sinh(){
    int i = cnt;
    while(i>=1 && a[i] == 1){
        i--;
    }
    if(i==0){
        ok = 0;
    }
    else {
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = a[i] / d;
        int r = a[i] % d;
        if(q){
            for(int j = 0;j<q;j++){
                cnt++;
                a[cnt] = a[i];
            }
        }
        if(r){
            cnt++;
            a[cnt] = r;
        }
    }
}
int main(){
    cin >> n;
    ktao();
    ok = 1;
    while(ok){
        for(int i=1;i<=cnt;i++){
            cout << a[i] << " ";
        }
        sinh();
        cout << endl;
    }
}
// Sai Nhe!