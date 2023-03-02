#include<bits/stdc++.h>

using namespace std;

int N,s,t; // kich co cua ma tran ke
bool OK=true;
vector<bool> visited;
vector<vector<int>> arr;
int parent[1005];


void DFS(int u){
	visited[u]=true;
	for(int v: arr[u]){
		if(!visited[v]){
			DFS(v);
			parent[v]=u;
		}
	}
}
void BFS(int u){
	queue<int> q;
	q.push(u); visited[u]=true;
	while(!q.empty()){
		int u=q.front(); q.pop();
		for(int v: arr[u]){
			if(!visited[v]){
				q.push(v);
				parent[v]=u;
				visited[v]=true;
			}
		}
	}
}
void path_1(int s,int t){
	visited.clear(); visited.resize(1001,false);
	DFS(s);
	if(!visited[t]){
		OK=false;
		
	}else{
		vector<int> res;
		while( t !=s){
			res.push_back(t);
			t=parent[t];
		}
		res.push_back(s);
		cout << "DFS path: ";
		for(int x: res){
			cout << x << " ";
		}
		cout << endl;
	}
}
void path_2(int s,int t){
	visited.clear(); visited.resize(1001,false);
	BFS(s);
	if(!visited[t]){
		cout << "no path" << endl;
	}else{
		vector<int> res;
		while( t !=s){
			res.push_back(t);
			t=parent[t];
		}
		res.push_back(s);
		cout << "BFS path: ";
		for(int x: res){
			cout << x << " ";
		}
		cout << endl;
	}
	
}
void solve(){
	cin >> N;
	cin >> s >> t;
	int a[100][100];
	arr.clear(); arr.resize(1001);
	
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin >> a[i][j];
			if(a[i][j]==1){
				arr[i].push_back(j);
			}
		}
	}
	if(OK==true){
		path_1(s,t);
		path_2(s,t);
	}else{
		cout << "no path" << endl;
	}
	
}

int main(){
	int t=2;
	while(t--){
		solve();
	}
	
}
