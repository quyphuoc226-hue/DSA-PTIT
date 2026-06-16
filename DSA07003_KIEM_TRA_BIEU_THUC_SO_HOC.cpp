#include <bits/stdc++.h>
using namespace std;
bool check(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/'){
        return true;
    }
    return false;
}
void Solve(){
    string s;
    getline(cin, s);
    stack<char> st;
    for(auto x : s){
        if(x != ')'){
            st.push(x);
        }
        else {
            bool ok = false;
            while(st.top() != '(' && !st.empty()){
                if(check(st.top())){
                    ok = true; 
                } 
                st.pop();
            }
            st.pop();
            if(!ok){
                cout << "Yes" << endl; 
                return;
            } 
        }
    }
    cout << "No" << endl;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        Solve();
    }
}