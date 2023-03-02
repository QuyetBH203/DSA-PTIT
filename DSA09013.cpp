// liet ke canh cau
//Tu tuong cua thuat toan la xet tung canh (i,j) cua do thi 
// neu so thanh phan lien thon moi tang thi do la canh cau
#include<bits/stdc++.h>

using namespace std;

int V,E,x,y,component;
vector<bool> visited;
vector<vector<int>> arr; // danh sach ke
vector<pair<int,int>> edge; // mang cac pair de luu cac cap canh


void DFS(int u){
	visited[u]=true;
	
	for(int v: arr[u]){
		// neu xet phai cap canh khong muon xet thi loai bo
		if(u==x && v==y || u==y && v==x){
			continue;
		}
		if( !visited[v]){
			DFS(v);
		}
	}
}
void canhcau(){
	visited.clear(); visited.resize(V+1,false);
	int new_Component=0;
	for(int i=1;i<=V;i++){
		if(!visited[i]){
			DFS(i);
			new_Component++;
		}
	}
	if(new_Component>component){
		cout << x << " " << y << endl;
	}
	
	
}
void solve(){
	component=0;
	cin >> V >> E;
	visited.clear(); visited.resize(V+1,false);
	arr.clear(); arr.resize(V+1);
	edge.clear(); edge.resize(E+1);
	for(int i=1;i<=E;i++){
		int u,v;
		cin >> u >> v;
		edge[i]={u,v};
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
	for(int i=1;i<=V;i++){
		if(!visited[i]){
			component++;
			DFS(i);
		}
	}
	for(int i=1;i<=E;i++){
		x=edge[i].first;
		y=edge[i].second;
		canhcau();
	}
	
	
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	return 0;
	
}
