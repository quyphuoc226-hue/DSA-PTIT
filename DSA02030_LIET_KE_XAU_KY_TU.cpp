#include <bits/stdc++.h>
using namespace std;

char c;
int K;
char s[100];

void Try(int i, char start){
    for(char ch = start; ch <= c; ch++){
        s[i] = ch;
        if(i == K){
            for(int j = 1; j <= K; j++){
                cout << s[j];
            }
            cout << '\n';
        } else {
            Try(i + 1, ch); // cho phép lặp, không giảm
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> c >> K;
    Try(1, 'A');
    return 0;
}
