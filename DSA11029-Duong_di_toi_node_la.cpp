#include<bits/stdc++.h>
// coi cay nhi phan la mot do thi co huong
// neu la node la thi se khong co thi danh sach ke se bang 0
using namespace std;
int n;
vector<int> adj[1005];
bool visited[1005];
int parent[1005];
void BFS(int s){
	queue<int> q;
	q.push(s);
	visited[s]=true;
	parent[s]=s;
	while(!q.empty()){
		int x=q.front(); q.pop();
		for(int y: adj[x]){
			if(!visited[y]){
				parent[y]=x;
				visited[y]=true;
				q.push(y);
			}
		}
	}
}

void Find_path(int s){
	stack<int> st;
	while(1){
		st.push(s);
		if(s==parent[s]) break;
		s=parent[s];
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=1;i<=n;i++){
			adj[i].clear();
		}
		memset(visited,false,sizeof(visited));
		for(int i=1;i<=n-1;i++){
			int x,y;
			cin >> x >> y;
			adj[x].push_back(y);
		}
		BFS(1);
		for(int i=1;i<=n;i++){
			if(adj[i].empty()){
				Find_path(i);
			}
		}
	}
}