#include <bits/stdc++.h>
using namespace std;
struct Test{
    int job, dl, pro;
};
bool cmp(Test a, Test b){
    return a.pro > b.pro;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Test a[n];
        for(int i=0;i<n;i++){
            cin >> a[i].job >> a[i].dl >> a[i].pro;
        }
        sort(a, a+n, cmp);
        int slot[1005] = {0};
        int cnt = 0;
        int res = 0;
        for(int i=0;i<n;i++){
            for(int t=a[i].dl;t>=1;t--){
                if(slot[t] == 0){
                    slot[t] = 1;
                    cnt++;
                    res+=a[i].pro;
                    break;
                }
            }
        }
        cout << cnt << " " << res << endl;
    }
}