#include <bits/stdc++.h>
using namespace std;
void Solve(){
    string s;
    cin >> s;
    stack<string> st;
    string temp = "";
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            string num = "";
            while(i < s.size() && isdigit(s[i])){
                num += s[i];
                i++;
            }
            st.push(num);
            i--;
        } else if(s[i] == '['){
            st.push("[");
        } else if(isalpha(s[i])){
            st.push(string(1, s[i]));
        } else {
            string cur = "";
            while(st.top() != "["){
                cur = st.top() + cur;
                st.pop();
            }
            st.pop();
            int k = stoi(st.top());
            st.pop();
            string expanded = "";
            while(k--) expanded += cur;
            st.push(expanded);
        }
        
    }
    string res = "";
    while(!st.empty()){
        res = st.top() + res;
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