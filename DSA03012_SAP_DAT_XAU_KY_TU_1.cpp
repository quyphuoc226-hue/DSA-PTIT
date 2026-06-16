#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a = s.length();
        map<char, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int MAX = -1;
        for(auto x : mp){
            if(x.second > MAX){
                MAX = x.second;
            }
        }
        if((a-1)/2+1 >= MAX) cout << "1";
        else cout << "-1";
        cout << endl;
    }
}