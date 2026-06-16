#include <bits/stdc++.h>
using namespace std;
int priority(char c){
    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return 0;
}
void Solve(){
    string s;
    cin >> s;
    stack<char> st;
    for(auto x : s){
        if(isalpha(x)) cout << x;
        if(x == '(') st.push(x);
        if(priority(x)){
            while(!st.empty() && priority(st.top()) >= priority(x)){
                cout << st.top();
                st.pop();
            }
            st.push(x);
        }
        if(x == ')'){
            while(st.top() != '('){
                cout << st.top();
                st.pop();
            }
            st.pop();
        }
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    } 
}