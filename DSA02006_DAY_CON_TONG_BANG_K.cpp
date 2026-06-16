#include <bits/stdc++.h>
using namespace std;
int a[100000], n, A[100000], k, K;
int TinhTong(){
    int tong = 0;
    for(int i=1;i<=k;i++){
        tong+=A[a[i]];
    }
    return tong;
}
void inkq(){
    for(int i = 1;i<=k;i++){
        cout << A[a[i]] << " ";
    }
    cout << " ";
}
vector<vector<int>> res; 
void Try(int i){
    for(int j = a[i-1] + 1; j<=n-k+i;j++){
        a[i] = j;
        if(i == k){
            if(TinhTong() == K){
                vector<int> tmp;
                for(int i=1;i<=k;i++){
                    tmp.push_back(A[a[i]]);
                }
                sort(tmp.begin(), tmp.end());
                res.push_back(tmp);
            }
        }
        else Try(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> K;
        for(int i=1;i<=n;i++){
            cin >> A[i];
        }
        for(k = 1;k<=n;k++){
            Try(1);
        }
        sort(res.begin(), res.end());
        if(res.size() == 0){
            cout << "-1";
        }
        else {
    
            for(auto x : res){
                cout << "[";
                for(auto y : x){
                    if(y==x.back()) cout << y;
                    else cout << y << " ";
                }
                cout << "]";
                cout << " ";
            }
        }
        res.clear();
        cout << endl;
    }
}