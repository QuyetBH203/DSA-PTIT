// Node la cua cay nhi phan tim kiem
#include<bits/stdc++.h>

using namespace std;
struct node{
	int val;
	node *left, *right;
	node(int x){
		val=x;
		left=right=NULL;
	}
};
void Build(node* &root,int a){
	if(root==NULL){
		root=new node(a);
		return;
	}
	if(root->val > a){
		Build(root->left,a);
	}else{
		Build(root->right,a);
	}
}
void leaf(node* &root){
	if(root== NULL) return;
	if(root->left == NULL && root->right == NULL){
		cout << root->val << " ";
	}
	leaf(root->left);
	leaf(root->right);
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		node* root= NULL;
		for(int i=1;i<=n;i++){
			int x; cin >> x;
			Build(root,x);
		}
		leaf(root);
		cout << endl;
	}

}
