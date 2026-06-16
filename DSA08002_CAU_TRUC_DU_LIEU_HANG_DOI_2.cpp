#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    queue <string> q;
    for(int i=1;i<=n;i++){
        string s;
        getline(cin, s);
        if(s.substr(0, 4) == "PUSH") q.push(s.substr(5));
        if(s == "PRINTFRONT"){
            if(q.empty()) cout << "NONE" << endl;
            else cout << q.front() << endl;
        } 
        if(s == "POP"){
            if(q.empty()) continue;
            else q.pop();
        }  
    }
}