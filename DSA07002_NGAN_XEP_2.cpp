#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    cin.ignore();
    stack<string> st;
    for(int i = 1; i <= q; i++){
        string s;
        getline(cin, s);
        if(s.substr(0, 4) == "PUSH"){
            st.push(s.substr(5));
        }
        if(s == "POP"){
            if(!st.empty()){
                st.pop();
            }
            else continue;
        }
        if(s == "PRINT"){
            if(st.empty()){
                cout << "NONE";
            }
            else {
                stack<string> temp;
                cout << st.top();
                while(!st.empty()){
                    temp.push(st.top());
                    st.pop();
                }
                while(!temp.empty()){
                    st.push(temp.top());
                    temp.pop();
                }
            }
            cout << endl;
        }
    }
}