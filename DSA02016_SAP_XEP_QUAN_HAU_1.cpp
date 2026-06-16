#include <bits/stdc++.h>
using namespace std;
int used[100], n, xuoi[100], nguoc[100], a[100];
int cnt;
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j] && !xuoi[i - j  + n] && !nguoc[i + j - 1]){
            a[i] = j;
            used[j] = 1;
            xuoi[i - j + n] = 1;
            nguoc[i + j - 1] = 1;
            if(i == n){
                cnt++;
            } else Try(i + 1);
            used[j] = 0;
            xuoi[i - j + n] = 0;
            nguoc[i + j - 1] = 0;
        }
    }
} 
int main(){
    int t;
    cin >> t;
    while(t --){
        memset(used, 0, sizeof(used));
        memset(xuoi, 0, sizeof(xuoi));
        memset(nguoc, 0, sizeof(nguoc));
        cin >> n;
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
}