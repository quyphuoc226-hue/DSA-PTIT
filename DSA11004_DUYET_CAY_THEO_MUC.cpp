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
void leverOrder(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* top = q.front(); q.pop();
        cout << top->data << " ";
        if(top->left) q.push(top->left);
        if(top->right) q.push(top->right);
    }
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
        leverOrder(root);
        cout << endl;
    }
}