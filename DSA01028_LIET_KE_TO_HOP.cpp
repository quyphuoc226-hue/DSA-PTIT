#include <bits/stdc++.h>
using namespace std;
int n, k, a[100000], N;
vector<int> A;
void inkq(){
    for(int i=1;i<=k;i++){
        cout << A[a[i]] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = a[i-1]+1;j<=n-k+i;j++){
        a[i] = j;
        if(i==k){
            inkq();
        }
        else Try(i+1);
    }
}
int main(){
    cin >> N >> k;
    set<int> se;
    for(int i=1;i<=N;i++){
        int temp;
        cin >> temp;
        se.insert(temp);
    }
    n = se.size();
    A.push_back(0);
    for(auto x : se){
        A.push_back(x);
    }
    Try(1);
}