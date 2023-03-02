//canhcau
#include<bits/stdc++.h>

using namespace std;

int N; // kich co cua ma tran ke
int x,y,component;

vector<bool> visited;
vector<vector<int>> arr;
vector<pair<int,int>> edge;

void DFS(int u){
	visited[u]=true;
	for(int v: arr[u]){
		if(v==x && u==y || v==y && u==x){
			continue;
		}
		if(!visited[v]){
			DFS(v);
		}
	}
}
void canhcau(){
	visited.clear(); visited.resize(10001,false);
	int new_component=0;
	for(int i=1;i<=N;i++){
		if(!visited[i]){
			new_component++;
			DFS(i);
		}
	}
	if(new_component>component){
		cout << x << " " << y << endl;
	}
}
void solve(){
	cin >> N;
	component=0;
	visited.clear(); visited.resize(1001,false);
	arr.clear(); arr.resize(1001);
	edge.clear(); edge.resize(1001);
	int a[100][100];
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin >> a[i][j];
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			if(a[i][j]==1 && i<j){
				edge.push_back({i,j});
			}
			if(a[i][j]==1){
				arr[i].push_back(j);
			}
		}
	}
	for(int i=1;i<=N;i++){
		if(!visited[i]){
			component++;
			DFS(i);
		}
	}
	for(auto it: edge){
		x=it.first;
		y=it.second;
		canhcau();
	}
}
int main(){
	int t=2;
	while(t--){
		solve();
		
	}
}

