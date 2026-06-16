#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int s, d;
        cin >> s >> d;
        int a[1005];
        for(int i=1;i<=9;i++){
            if(s - i <= (d-1)*9){
                a[1] = i;
                s-=i;
                break;
            }
        }
        for(int i = d;i>=2;i--){
            if(s >= 9){
                a[i] = 9;
                s-=9;
            }
            else {
                a[i] = s;
                s-= a[i];
            }
        }
        cout << endl;
    }
}