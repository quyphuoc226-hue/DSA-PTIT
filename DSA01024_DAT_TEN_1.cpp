#include <bits/stdc++.h>
using namespace std;
int k, n, a[100000];
vector<string> v;
void inkq(){
    for(int i = 1;i<=k;i++){
        cout << v[a[i]] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = a[i-1]+1;j<=n-k+i;j++){
        a[i] = j;
        if(i == k){
            inkq();
        }
        else Try(i+1);
    }
}
int main(){
    int N;
    cin >> N >> k;
    set<string> se;
    for(int i=1;i<=N;i++){
        string s;
        cin >> s;
        se.insert(s);
    }
    v.push_back("");
    for(auto x : se){
        v.push_back(x);
    }
    n = se.size();
    Try(1);
}