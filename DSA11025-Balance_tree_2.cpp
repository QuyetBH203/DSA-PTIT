// DSA11025- Cay nhi phan tim kiem can bang 2


#include<bits/stdc++.h>


using namespace std;

struct node
{
    int val;
    node *left, *right;
    node(int x){
        val=x;
        left=right= NULL;
    }
    /* data */
};
vector<node*> v;
void Build(node* &root,int a){
    if(root== NULL){
        root= new node(a);
        return;
    }
    if(root->val > a){
        Build(root->left,a);
    }else{
        Build(root->right,a);
    }
}
void preorder(node* root){
    if(root != NULL){
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void Inorder(node* root){
    if(root != NULL){
        Inorder(root->left);
        v.push_back(root);
        Inorder(root->right);
    }
}
node* Build_balance_tree(vector<node*> &v,int start,int end){
    if(start > end){
        return NULL;
    }
    int mid=(start+end)/2;
    node* root= v[mid];
    // Using index in Inorder traversal, construct
    // left and right nodes
    root->left= Build_balance_tree(v,start,mid-1);
    root->right=Build_balance_tree(v,mid+1,end);

    return root;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        v.clear();
        node *root= NULL;
        for(int i=1;i<=n;i++){
            int x; cin >> x;
            Build(root,x);
        }
        Inorder(root);
        node* x= NULL;
        x= Build_balance_tree(v,0,n-1);
        preorder(x);
        cout << endl;


    }
}