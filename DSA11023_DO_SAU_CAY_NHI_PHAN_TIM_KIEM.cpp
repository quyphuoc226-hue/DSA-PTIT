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
node* insert(node* root, int x){
    if(root == NULL) return new node(x);
    if(root->data > x) root->left = insert(root->left, x);
    else root->right = insert(root->right, x);
    return root;
}
void bfs(node* root){
    queue<pair<node*, int>> q;
    q.push({root, 0});
    int ans = 0;
    while(!q.empty()){
        pair<node*, int> top = q.front(); q.pop();
        ans = max(ans, top.second);
        if(top.first->left) q.push({top.first->left, top.second + 1});
        if(top.first->right) q.push({top.first->right, top.second + 1});
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        node* root = NULL;
        for(int i = 0; i < n; i++){
            root = insert(root, a[i]);
        }
        bfs(root);
    }
}