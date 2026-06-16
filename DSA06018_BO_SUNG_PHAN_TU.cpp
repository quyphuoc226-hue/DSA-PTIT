#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        int cnt = 0;
        int L = *max_element(s.begin(), s.end());
        int R = *min_element(s.begin(), s.end());
        for(int i = R; i <= L; i++){
            if(s.find(i) == s.end()){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}