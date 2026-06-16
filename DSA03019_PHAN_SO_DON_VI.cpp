#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    if(b==0) return a;
    else return gcd(b, a%b);
}
long long lcm(long long a, long long b){
    return a / gcd(a, b) * b;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while(t--){
        long long P, Q;
        cin >> P >> Q;
        long long ucln = gcd(P, Q);
        P /= ucln;
        Q /= ucln;
        if(P == 1){
            cout << P << "/" << Q;
        }
        else {
            vector<long long> v;
            long long x;
            while(P!=1){
                x = (Q+P-1)/P;
                v.push_back(x);
                long long bc = lcm(x, Q);
                P = P * (bc / Q) - bc / x;
                Q = bc;
                long long g = gcd(Q, P);
                P /= g;
                Q /= g;
            }
            v.push_back(Q);
            for(auto x : v){
                if(x == v.back()) cout << "1/" << x;
                else cout << "1/" << x << " + ";
            }
//            if(P == 1) cout << P << "/" << Q;
        }
        cout << endl;
    }
}