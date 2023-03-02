#include<bits/stdc++.h>

using namespace std;


vector<vector<int>> arr;
vector<bool> visited;
int ans,n;

void DFS(int u){
	visited[u]=true;
	for(int v: arr[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}
void tranfer(int b[100][100],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(b[i][j]==1){
				arr[i].push_back(j);
			}
		}
	}
}
void connectedComponent(){
	ans=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			ans++;
			DFS(i);
		}
	}
	cout << ans << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		int a[100][100];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin >> a[i][j];
			}
		}
		arr.clear(); arr.resize(1001);
		visited.clear(); visited.resize(101,0);
		tranfer(a,n);
		connectedComponent();
	}
}

