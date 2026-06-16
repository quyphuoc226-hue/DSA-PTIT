#include <bits/stdc++.h>
using namespace std;
int dx[10] = {-1, 0, 1, 0};
int dy[10] = {0, 1, 0, -1};
//bool visited[1005][1005];
int a[1005][1005];
int cnt;
int n, k, m; // n là phạm vi bảng, k là số chú cừu, m là số lượng hảng rào
map<pair<pair<int, int>, pair<int, int>>, int> mp; // tạo map để lưu vị trí hàng rào
map<pair<int, int>, int> mark; // đánh dấu chú cừu ở ô (i, j) thuộc miền liên thông nào
void dfs(int i, int j){
    if(a[i][j] == 1){
        mark[{i, j}] = cnt; // chú cừu ở vị trí (i, j) sẽ thuộc miền liên thông thứ cnt
    }
    a[i][j] = -1;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n){ // Nếu ô (i1, j1) nằm trên lưới
            if(mp[{{i, j}, {i1, j1}}] != 1 && a[i1][j1] != -1){ // và chưa thăm + không có rào chắn
                dfs(i1, j1); // thì gọi dfs đến (i1, j1)
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(a, 0, sizeof(a));
    cin >> n >> k >> m;
    for(int i = 1; i <= m; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        mp[{{x1, y1}, {x2, y2}}] = 1;// Đánh dầu 2 chiều đều là bị chặn bởi hàng rào
        mp[{{x2, y2}, {x1, y1}}] = 1;
    }
    vector<pair<int, int>> vt;
    for(int i = 1; i <= k; i++){
        int x, y;
        cin >> x >> y;
        a[x][y] = 1; //đánh dấu chú cừu ở vị trí này
        vt.push_back({x, y});
    }
    // Đếm số lượng miền liên thông:
    cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1){
                cnt++;
                dfs(i, j);
            }
        }
    }
    //Duyệt qua tất cả các chú cừu, nếu không cùng thành phần liên thông thì ++ 
    int res = 0;
    for(int i = 0; i < k - 1; i++){
        for(int j = i+1; j < k; j++){
            if(mark[{vt[i].first, vt[i].second}] != mark[{vt[j].first, vt[j].second}]) res++;
        }
    }
    cout << res;
}