#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a, a+n);
        string N1 = "", N2 = "";
        for(int i=0;i<n;i++){
            if(i%2==0){
                N1+=to_string(a[i]);
            }
            else N2+=to_string(a[i]);
        }
        long long res = stoll(N1) + stoll(N2);
        cout << res << endl;
    }
}