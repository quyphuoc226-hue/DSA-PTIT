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
vector<int> ans;
void bfs(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* top = q.front(); q.pop();
        if(!top->left && !top->right) ans.push_back(top->data);
        if(top->left) q.push(top->left);
        if(top->right) q.push(top->right);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ans.clear();
        int n;
        cin >> n;
        int a[n];
        node* root = NULL;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            root = insert(root, a[i]);
        }
        bfs(root);
        sort(ans.begin(), ans.end());
        for(auto x : ans) cout << x << " ";
        cout << endl;
    }
}