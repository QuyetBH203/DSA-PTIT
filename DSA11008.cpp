// Kiem tra node la
// node la la node khong co cac node con

#include<bits/stdc++.h>

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
bool checkLevel(node *root,int level,int *leafLevel){
    if(root==NULL) return true;
    if(root->left== NULL && root->right==NULL){
        if(*leafLevel==0){
            *leafLevel=level;
        }
        return(level== *leafLevel);
    }
    return checkLevel(root->left,level+1,leafLevel) &&
           checkLevel(root->right,level+1,leafLevel);
}
bool check(node *root){
    int level=0;
    int leafLevel=0;
    return checkLevel(root,level, &leafLevel);
}


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        node *root= NULL;
        for(int i=1;i<=n;i++){
            int a,b;
            char c;
            cin >> a >> b >> c;
            if(root==NULL){
                root =new node(a);
                if(c=='L') root->left= new node(b);
                else root->right= new node(b);

            }else{
                insert(root,a,b,c);
            }
        }
        if(check(root)){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }

    }
}