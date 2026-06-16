#include <bits/stdc++.h>
using namespace std;
string s;
void prev(){
    int i=s.size()-1;
    while(i>=0 && s[i] == '0'){
        s[i] = '1';
        i--;
    }
    if(i==-1){
        for(int i=0;i<s.size();i++){
            s[i] = '1';
        }
    }
    else {
        s[i] = '0';
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        prev();
        for(int i = 0;i<s.size();i++){
            cout << s[i];
        }
        cout << endl;
    }
    //return 0;
}
