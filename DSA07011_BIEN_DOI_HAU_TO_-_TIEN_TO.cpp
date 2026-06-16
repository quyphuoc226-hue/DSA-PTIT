#include <bits/stdc++.h>
using namespace std;
void Solve(){
    string s;
    cin >> s;
    stack<string> st;
    for(auto x : s){
        if(isalpha(x)){
            st.push(string(1, x));
        }
        else {
            string b = st.top(); st.pop();
            string a = st.top(); st.pop();
            string temp = string(1, x) + a + b;
            st.push(temp);
        }
    }
    cout << st.top() << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}