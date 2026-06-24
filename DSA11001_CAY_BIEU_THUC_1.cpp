#include <bits/stdc++.h>
using namespace std;
struct node{
    char data;
    node* left;
    node* right;
    node(char x){
        data = x;
        left = right = NULL;
    }
};
void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<node*> st;
        for(auto x : s){
            if(isalpha(x)){
                st.push(new node(x));
            }
            else {
                node *root = new node(x);
                root->right = st.top(); st.pop();
                root->left = st.top(); st.pop();
                st.push(root);
            }
        }
        inorder(st.top());
        cout << endl;
    }
}
