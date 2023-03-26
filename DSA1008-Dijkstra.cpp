#include<bits/stdc++.h>
#define ii pair<int,int>
using namespace std;
const int inf=1e9;

int V,E,s;
vector<ii> adj[1005];

void nhap(){
	cin >> V >> E >> s;
	for(int i=1;i<=E;i++){
		int x,y,w; cin >> x >> y >> w;
		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
	}
}
void dijkstra(){
	priority_queue<ii,vector<ii>,greater<ii>> Q;
	Q.push({0,s});
	vector<int> d(V+1,inf);
	d[s]=0;
	while( !Q.empty()){
		ii t=Q.top(); Q.pop();
		int dis=t.first;
		int u=t.second;
		if(dis>d[u]) continue;
		for(auto it: adj[u]){
			int v=it.first,w=it.second;
			if(d[v]>d[u]+w){
				d[v]=d[u]+w;
				Q.push({d[v],v});
			}
		}
	}
	for(int i=1;i<=V;i++){
		cout << d[i] << " ";
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i=1;i<=V;i++){
			adj[i].clear();
			
		}
		nhap();
		dijkstra();
	}
	return 0;
}
