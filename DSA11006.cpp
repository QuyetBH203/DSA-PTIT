// duyet cay xoan oc
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

void printSpiral(struct node* root)
{
    if (root == NULL)
        return; // NULL check
 
    // Create two stacks to store alternate levels
    stack<struct node*>
        s1; // For levels to be printed from right to left
    stack<struct node*>
        s2; // For levels to be printed from left to right
 
    // Push first level to first stack 's1'
    s1.push(root);
 
    // Keep printing while any of the stacks has some nodes
    while (!s1.empty() || !s2.empty()) {
        // Print nodes of current level from s1 and push
        // nodes of next level to s2
        while (!s1.empty()) {
            struct node* temp = s1.top();
            s1.pop();
            cout << temp->val << " ";
 
            // Note that is right is pushed before left
            if (temp->right)
                s2.push(temp->right);
            if (temp->left)
                s2.push(temp->left);
        }
 
        // Print nodes of current level from s2 and push
        // nodes of next level to s1
        while (!s2.empty()) {
            struct node* temp = s2.top();
            s2.pop();
            cout << temp->val << " ";
 
            // Note that is left is pushed before right
            if (temp->left)
                s1.push(temp->left);
            if (temp->right)
                s1.push(temp->right);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        node *root=NULL;
        for(int i=1;i<=n;i++){
            int a,b;
            char c;
            cin >> a >> b >> c;
            if(root==NULL){
                root =new node(a);
                if(c=='L') root->left= new node(b);
                else{
                    root->right=new node(b);
                }
            }else{
                insert(root,a,b,c);
            }
        }
       printSpiral(root);
        cout << endl;
    }
}

