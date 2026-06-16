#include <bits/stdc++.h>
using namespace std;
void Solve(){
    string s;
    cin >> s;
    stack<string> st;
    for(int i = s.size() - 1; i >= 0; i--){
        if(isalpha(s[i])){
            st.push(string(1, s[i]));
        }
        else{
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            if(s[i] == '+') st.push(a + b + "+");
            if(s[i] == '-') st.push(a + b + "-");
            if(s[i] == '*') st.push(a + b + "*");
            if(s[i] == '/') st.push(a + b + "/");
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