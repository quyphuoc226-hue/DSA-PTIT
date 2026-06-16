#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000005;
bool  P[MAX + 1];
void sang(){
    memset(P, true, sizeof(P));
    P[0] = 0;
    P[1] = 0;
    for(int i = 2; i <= sqrt(MAX); i++){
        if(P[i]){
            for(int j = i * i; j < MAX; j += i){
                P[j] = false;
            }
        }
    }
}
int main(){
    sang();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ok = false;
        for(int i = 2; i <= n; i++){
            if(P[i] && P[n - i]){
                cout << i << " " << n - i << endl;
                ok = true;
                break;
            }
        }
        if(!ok) cout << "-1" << endl;
    }
}