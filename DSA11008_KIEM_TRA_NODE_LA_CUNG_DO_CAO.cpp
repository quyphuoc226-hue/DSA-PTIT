#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};
void makeRoot(node* root, int u, int v, char c){
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}
void insertNode(node* root, int u, int v, char c){
    if(root == NULL) return;
    if(root->data == u){
        makeRoot(root, u, v, c);
    }
    else {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}
bool bfs(node* root){
    queue<pair<node*, int>> q;
    q.push({root, 0});
    int ans = -1;
    while(!q.empty()){
        pair<node*, int> top = q.front(); q.pop();
        if(!top.first->left && !top.first->right){
            if(ans == -1) ans = top.second;
            else if(ans != top.second) return false;
        }
        if(top.first->left) q.push({top.first->left, top.second + 1});
        if(top.first->right) q.push({top.first->right, top.second + 1});
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        node* root = NULL;
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            int u, v;
            char c;
            cin >> u >> v >> c;
            if(root == NULL){
                root = new node(u);
                makeRoot(root, u, v, c);
            }
            else {
                insertNode(root, u, v, c);
            }
        }
        if(bfs(root)) cout << "1";
        else cout << "0";
        cout << endl;
    }
}