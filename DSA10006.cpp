#include<bits/stdc++.h>

using namespace std;
int V,E; // dinh ,canh
int u; // dinh bat dau duyet
vector<int> adj[1001];
vector<bool> visited;
vector<pair<int,int>> arr;

void tree_DFS(int u){
    visited[u]=true;
    for(int v: adj[u]){
        if(!visited[v]){
            arr.push_back({u,v});
            tree_DFS(v);
        }
    }

}
void solve(){
    cin >> V >> E >> u;
    for(int i=1;i<=V;i++){
        adj[i].clear();
    }
    arr.clear();
    visited.clear(); visited.resize(1001,false);
    for(int i=1;i<=E;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        
    }
    tree_DFS(u);
    if(arr.size()<V-1){
        cout << -1 << endl;
    }else{
        for(auto it: arr ){
            cout << it.first << " " << it.second << endl;
        }
    }

}

int main(){
    int t; cin >> t;
    while(t--){
        solve();

    }
}