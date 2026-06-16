#include <bits/stdc++.h>
using namespace std;
void Solve(){
    long long n; 
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string token;
    stack<long long> st;
    while(ss >> token){
        v.push_back(token);
    }
    for(long long i = v.size() - 1; i >= 0; i--){
        if(v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/"){
            st.push(stoll(v[i]));
        }
        else {
            long long a = st.top(); st.pop();
            long long b = st.top(); st.pop();
            if(v[i] == "+") st.push(a + b);
            if(v[i] == "-") st.push(a - b);
            if(v[i] == "*") st.push(a * b);
            if(v[i] == "/") st.push(a / b);
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