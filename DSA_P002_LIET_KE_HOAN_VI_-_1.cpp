#include <bits/stdc++.h>
using namespace std;
int n, a[15];
vector<string> res;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    res.push_back("");
    cin >> n;
    string temp = "";
    for(int i = 1; i <= n; i++){
        temp += to_string(i);
    }
    do {
        res.push_back(temp);
    } while(next_permutation(temp.begin(), temp.end()));
    for(int i = 1; i < res.size(); i++){
            cout << i << ": ";
            for(auto x : res[i]){
                cout << x << " ";
            }
            cout << endl;
    }
}