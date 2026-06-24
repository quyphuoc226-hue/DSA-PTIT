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
void spiralOrder(node* root){
    stack<node*> st1;
    stack<node*> st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            node* top = st1.top(); st1.pop();
            cout << top->data << " ";
            if(top->right) st2.push(top->right);
            if(top->left) st2.push(top->left);
        }
        while(!st2.empty()){
            node* top = st2.top(); st2.pop();
            cout << top->data << " ";
            if(top->left) st1.push(top->left);
            if(top->right) st1.push(top->right);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        node* root = NULL;
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
        spiralOrder(root);
        cout << endl;
    }
}