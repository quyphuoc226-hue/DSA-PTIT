#include <bits/stdc++.h>
using namespace std;
int n, a[15];
bool check(string s){
    string t = s;
    reverse(t.begin(), t.end());
    if(s == t) return true;
    else return false;
}
vector<string> res;
void inkq(){
    string temp = "";
    for(int i = 1; i <= n; i++){
        temp += to_string(a[i]);
    }
    if(check(temp)) res.push_back(temp);
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            inkq();
        }
        else Try(i + 1);
    }
}
int main(){
    cin >> n;
    Try(1);
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
}