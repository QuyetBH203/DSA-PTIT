// DSA11024- Cay nhi phan tim kiem can bang 1
// Note: Cay nhi phan can bang la cay co do cao cua 
//       cay con ben trai va cay con ben phai chenh lech nhau
//       khong qua 1

#include<bits/stdc++.h>

using namespace std;
vector<int> v;
struct node
{
    int val;
    node *left, *right;
    node(int x){
        val=x;
        left=right=NULL;
    }
    /* data */
};
void Build(node* &root,int a){
    if(root== NULL){
        root= new node(a);
        return;
    }
    if(root->val > a) Build(root->left,a);
    else{
        Build(root->right,a);
    }
}
void Inorder(node* root){
    if(root != NULL){
        Inorder(root->left);
        v.push_back(root->val);
        Inorder(root->right);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int mid=(n-1)/2;
        node *root= NULL;
        v.clear();
        for(int i=1;i<=n;i++){
            int x; cin >> x;
            Build(root,x);
        }
        Inorder(root);
        cout << v[mid] << endl;    
    }

}