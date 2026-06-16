#include <bits/stdc++.h>
using namespace std;
void Solve(){
    long long n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    stack<long long> st;
    while(ss >> temp){
        if(temp != "+" && temp != "-" && temp != "*" && temp != "/"){
            st.push(stoll(temp));
        }
        else {
            long long a = st.top(); st.pop();
            long long b = st.top(); st.pop();
            if(temp == "+") st.push(a + b);
            if(temp == "-") st.push(b - a);
            if(temp == "*") st.push(a * b);
            if(temp == "/") st.push(b / a); 
        }
    }
    cout << st.top() << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        Solve();
    }
}