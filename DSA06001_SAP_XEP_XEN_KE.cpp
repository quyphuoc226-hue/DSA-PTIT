#include <bits/stdc++.h>
using namespace std;
int a[1005], n;
void Solve(int a[], int n){
    sort(a, a + n);
    int x = n - 1;
    int y = 0;
    while(x > y){
        cout << a[x] << " " << a[y] << " ";
        x--;
        y++;
    }
    if(x == y) cout << a[x];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        Solve(a, n);
        cout << endl;
    }
}