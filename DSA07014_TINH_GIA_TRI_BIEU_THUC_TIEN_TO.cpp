#include <bits/stdc++.h>
using namespace std;
void Solve(){
    string s;
    cin >> s;
    stack<int> st;
    for(int i = s.size() - 1; i >= 0; i--){
        if(isdigit(s[i])){
            st.push(s[i] - '0');
        }
        else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            if(s[i] == '+') st.push(a + b);
            if(s[i] == '-') st.push(a - b);
            if(s[i] == '*') st.push(a * b);
            if(s[i] == '/') st.push(a / b);
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