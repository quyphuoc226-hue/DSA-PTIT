#include <bits/stdc++.h>
using namespace std;
int d[20] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 9; i >= 0; i--){
            while(n >= d[i]){
                n -= d[i];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}