#include <bits/stdc++.h>
using namespace std;
void Solve(){
    string s;
    cin >> s;
    stack<int> st;
    for(auto x : s){
        if(isdigit(x)){
            st.push(x - '0');
        }
        else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            if(x == '+') st.push(a + b);
            if(x == '-') st.push(b - a);
            if(x == '*') st.push(a * b);
            if(x == '/') st.push(b / a);
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