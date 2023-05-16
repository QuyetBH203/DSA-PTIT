#include<bits/stdc++.h>
// cay nhi phan hoan hao la moi node trung gian deu co hai node con
// cac node la deu cung muc
using namespace std;

struct node
{
    int val;
    node *right, *left;
    node(int x){
        val=x;
        left=right=NULL;
    }
    /* data */
};
void insert(node *root,int a,int b, char c){
    if(root==NULL) return;
    if(root->val==a){
        if(c=='L') root->left= new node(b);
        else root->right= new node(b);
        return;
    }
    insert(root->left,a,b,c);
    insert(root->right,a,b,c);
}
int depth(node *root){
    int d=0;
    while(root !=NULL){
        d++;
        root=root->left;
    }
    return d;

}
bool isPerfectRec(struct node* root, int d, int level = 0)
{
    // An empty tree is perfect
    if (root == NULL)
        return true;
 
    // If leaf node, then its depth must be same as
    // depth of all other leaves.
    if (root->left == NULL && root->right == NULL)
        return (d == level+1);
 
    // If internal node and one child is empty
    if (root->left == NULL || root->right == NULL)
        return false;
 
    // Left and right subtrees must be perfect.
    return isPerfectRec(root->left, d, level+1) &&
           isPerfectRec(root->right, d, level+1);
}
 
// Wrapper over isPerfectRec()
bool isPerfect(node *root)
{
   int d = depth(root);
   return isPerfectRec(root, d);
}
int main(){
    int t; cin >> t;
    while (t--)
    {

        int n; cin >> n;
        node *root=NULL;
        for(int i=1;i<=n;i++){
            int a,b;
            char c;
            cin >> a >> b >> c;
            if(root==NULL){
                root =new node(a);
                if(c=='L') root->left =new node(b);
                else root->right= new node(b);
            }else{
                insert(root,a,b,c);
            }
        }
        if(isPerfect(root)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    

}