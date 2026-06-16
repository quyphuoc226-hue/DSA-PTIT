#include <bits/stdc++.h>
using namespace std;
long long F[100];
void Fibo(){
    F[1] = 1;
    F[2] = 1;
    for(long long i = 3; i <= 92; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}
char find(long long n, long long k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k > F[n - 2]) return find(n - 1, k - F[n - 2]);
    else return find(n - 2, k);
}
main(){
    long long t;
    cin >> t;
    Fibo();
    while(t--){
        long long n, k;
        cin >> n >> k;
        cout << find(n , k) << endl;
    }
}