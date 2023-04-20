#include<bits/stdc++.h>

using namespace std;
int parent[1005];
int n; // so dinh cua do thi

vector<int> arr[1005];
bool visited[1005];

int Find(int u){
	if(u==parent[u]) return u;
	return parent[u]=Find(parent[u]);
}
bool check_cycle(vector<pair<int,int>>& p){
	for(auto it: p){
		int a=Find(it.first);
		int b=Find(it.second);
		if(a==b){
			return true;
		}
		parent[a]=b;
	}
	return false;
}
void DFS(int u){
	visited[u]=true;
	for(int v: arr[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}
void solve(){
	cin >> n;
	vector<pair<int,int>> p;
	for(int i=1;i<=n;i++){
		parent[i]=i;
		arr[i].clear();
	}
	for(int i=1;i<=n-1;i++){
		int x,y;
		cin >> x >> y;
		p.push_back({x,y});
		arr[x].push_back(y);
		arr[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
	int cnt=1;
	DFS(1);
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			cnt++;
		}
	}
	if(cnt==1 && !check_cycle(p)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}