#include<bits/stdc++.h>

using namespace std;

int parent[100005],sz[100005];
int n,m; // so ban, cap ban
int ans;
void init(int n){
	for(int i=1;i<=n;i++){
		parent[i]=i;
		sz[i]=1;
	}
}
int Find(int u){
	if(u==parent[u]) return u;
	return parent[u]=Find(parent[u]);
}
void Union(int u,int v){
	u=Find(u);
	v=Find(v);
	if(u==v) return;
	if(sz[u]<sz[v]) swap(u,v);
	parent[v]=u;
	sz[u]+=sz[v];
	ans=max(ans,sz[u]);
	
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		int b=m;
		init(n);
		ans=1;
		while(m--){
			int x,y;
			cin >> x >> y;
			Union(x,y);
		}
		if(ans==b){
			cout << "YES";
		}else{
			cout << "NO";
		}
		cout << endl;
	}
}
