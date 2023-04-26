#include<bits/stdc++.h>
using namespace std;

struct node {
	int val;
	node *left, *right;
	node(int x) { // constructor co ten trung vo struct, khong co kieu tra ve
		val = x;
		left = right = NULL;
	}
};

void insert(node *root, int u, int v, char c) {
	if(root == NULL) return;
	if(root->val == u) {
		if(c == 'L') root->left = new node(v);
		else root->right = new node(v);
		return;
	}
	insert(root->left, u, v, c);
	insert(root->right, u, v, c);
}
void levelOrder(node *root){
	queue<node*> q;
	q.push(root);
	cout << root->val << " ";
	while(!q.empty()){
		node *tmp=q.front();
		q.pop();
		if(tmp->left !=NULL){
			q.push(tmp->left);
			cout << tmp->left->val << " ";
		}
		if(tmp->right !=NULL){
			q.push(tmp->right);
			cout << tmp->right->val << " ";
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		node *root=NULL;
		
		for(int i=1;i<=n;i++){
			int a,b;
			char c;
			cin >> a >> b >> c;
			if(root==NULL){
				root=new node(a);
				if(c=='L') root->left=new node(b);
				else root->right=new node(b);
			}else{
				insert(root,a,b,c);
			}
			
		}
		levelOrder(root);
		cout << endl;
	}
}
