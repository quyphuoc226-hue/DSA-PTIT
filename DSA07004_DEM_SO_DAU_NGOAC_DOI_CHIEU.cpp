#include <bits/stdc++.h>
using namespace std;
void Solve(){
    string s;
    cin >> s;
    stack<char> st;
    for(auto x : s){
        if(x == '('){
            st.push(x);
        }
        else {
            if(!st.empty() && st.top() == '(') st.pop();
            else st.push(x);
        }
    }
    int a = 0; // Đếm số (
    int b = 0; // Đếm số )
    while(!st.empty()){
        if(st.top() == '(') a++;
        else b++;
        st.pop();
    }
    cout << (a + 1) / 2 + (b + 1) / 2 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}