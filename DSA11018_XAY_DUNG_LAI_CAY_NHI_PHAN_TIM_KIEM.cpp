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
node* insert(node* root, int x){
    if(root == NULL) return new node(x);
    if(root->data > x) root->left = insert(root->left, x);
    else root->right = insert(root->right, x);
    return root;
}
void preorder(node* root){
    if(root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
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
        preorder(root);
        cout << endl;
    }
}