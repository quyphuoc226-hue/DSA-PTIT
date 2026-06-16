#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n + 1];
    int pos[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pos[a[i]] = i;
    }
    int cur = 1, longgest = 1;
    for(int i = 1; i <= n - 1; i++){
        if(pos[i] < pos[i + 1]){
            cur++;
            longgest = max(longgest, cur);
        }
        else cur = 1;
    }
    cout << n - longgest;
}