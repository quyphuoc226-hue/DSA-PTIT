#include <bits/stdc++.h>
using namespace std;
void Solve(){
    string s;
    cin >> s;
    int num = 1;
    string res = "";
    stack<int> st;
    for(int i = 0; i < s.size(); i++){
        st.push(num++);
        if(s[i] == 'I'){
            while(!st.empty()){
                res += to_string(st.top());
                st.pop();
            } 
        }
    }
    res += to_string(num);
    while(!st.empty()){
        res += to_string(st.top());
        st.pop();
    }
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}