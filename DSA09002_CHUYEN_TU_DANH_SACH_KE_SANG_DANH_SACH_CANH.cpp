#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        getline(cin, v[i]);
    }
    for(int i = 0; i < v.size(); i++){
        stringstream ss(v[i]);
        int temp;
        while(ss >> temp){
            if(i + 1 < temp) cout << i + 1 << " " << temp << endl;
        }
    }
}