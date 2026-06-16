#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<int> q;
        for(int i=0;i<n;i++){
            int k;
            cin >> k;
            if(k==1){
                cout << q.size() << endl;
            }
            if(k==2){
                if(q.empty()) cout << "YES";
                else cout << "NO";
                cout << endl;
            }
            if(k==3){
                int a;
                cin >> a;
                q.push(a);
            }
            if(k==4){
                if(q.empty()) continue;
                else q.pop();
            }
            if(k==5){
                if(q.empty()) cout << "-1";
                else cout << q.front();
                cout << endl;
            }
            if(k==6){
                if(q.empty()) cout << "-1";
                else cout << q.back();
                cout << endl;
            }
        }
    }
}