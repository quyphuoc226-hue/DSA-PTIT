#include <bits/stdc++.h>
using namespace std;
int used[10], xuoi[20], nguoc[20], a[20], n;
vector<string> d;
void inkq() {
	string temp = "";
	for(int i = 1; i <= n; i++) {
		temp += to_string(a[i]);
	}
	d.push_back(temp);
}
void Try(int i) {
	for(int j = 1; j <= n; j++) {
		if(used[j] && xuoi[i - j + n] && nguoc[i + j - 1]) {
			a[i] = j;
			used[j] = 0;
			xuoi[i - j + n] = 0;
			nguoc[i + j - 1] = 0;
			if(i == n) {
				inkq();
			} else Try(i+1);
			used[j] = 1;
			xuoi[i - j + n] = 1;
			nguoc[i + j - 1] = 1;
		}
	}
}
int main() {
	memset(used, 1, sizeof(used));
	memset(xuoi, 1, sizeof(xuoi));
	memset(nguoc, 1, sizeof(nguoc));
	n = 8;
	Try(1);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		int A[10][10];
		for(int i = 1; i <= 8; i++) {
			for(int j = 1; j <= 8; j++) {
				cin >> A[i][j];
			}
		}
		int MAX = -1;
		for(auto x : d){
			int tong = 0;
			for(int i = 0; i < x.size(); i++){
				tong += A[i+1][x[i] - '0'];
			}
			if(tong > MAX){
				MAX = tong;
			}
		}
		cout << "Test " << i << ": " << MAX << endl;
	}

}
//1
//1 2 3 4 5 6 7 8
//9 10 11 12 13 14 15 16
//17 18 19 20 21 22 23 24
//25 26 27 28 29 30 31 32
//33 34 35 36 37 38 39 40
//41 42 43 44 45 46 47 48
//48 50 51 52 53 54 55 56
//57 58 59 60 61 62 63 64