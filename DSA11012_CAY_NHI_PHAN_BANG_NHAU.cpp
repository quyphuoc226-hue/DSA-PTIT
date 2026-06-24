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
bool bfs(node* root1, node* root2){
    queue<pair<node*, node*>> q;
    q.push({root1, root2});
    while(!q.empty()){
        pair<node*, node*> top = q.front(); q.pop();
        if(top.first->data != top.second->data) return false;
        if(top.first->left && !top.second->left || !top.first->left && top.second->left || top.first->right && !top.second->right || !top.first->right && top.second->right) return false;
        if(top.first->left && top.second->left) q.push({top.first->left, top.second->left});
        if(top.first->right && top.second->right) q.push({top.first->right, top.second->right});
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        node* root1 = NULL;
        node* root2 = NULL;
        for(int i = 1; i <= n; i++){
            int u, v;
            char c;
            cin >> u >> v >> c;
            if(root1 == NULL){
                root1 = new node(u);
                makeRoot(root1, u, v, c);
            }
            else {
                insertNode(root1, u, v, c);
            }
        }
        int N;
        cin >> N;
        for(int i = 1; i <= N; i++){
            int u, v;
            char c;
            cin >> u >> v >> c;
            if(root2 == NULL){
                root2 = new node(u);
                makeRoot(root2, u, v, c);
            }
            else {
                insertNode(root2, u, v, c);
            }
        }
        if(bfs(root1, root2)) cout << "1";
        else cout << "0";
        cout << endl;
    }   
}