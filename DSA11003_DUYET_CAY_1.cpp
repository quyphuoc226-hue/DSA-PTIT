#include <bits/stdc++.h>
using namespace std;
int pre[1005];
int in[1005];
map<int, int> pos;
struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};
node* build(int pre1, int pre2, int in1, int in2){
    if(pre1 > pre2) return NULL;
    int rootval = pre[pre1];
    node* root = new node(rootval);
    int k = pos[rootval];
    int leftsize = k - in1;
    root->left = build(pre1 + 1, pre1 + leftsize, in1, k - 1);
    root->right = build(pre1 + leftsize + 1, pre2, k + 1, in2);
    return root;
}
void postorder(node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> in[i];
            pos[in[i]] = i;
        }
        for(int i = 0; i < n; i++){
            cin >> pre[i];
        }
        postorder(build(0, n - 1, 0, n - 1));
        cout << endl;
    }
}