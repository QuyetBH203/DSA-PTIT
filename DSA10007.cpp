#include<bits/stdc++.h>

using namespace std;

int V,E; // so dinh va canh
int u; // dinh bat dau duyet

vector<int> adj[1001];
vector<bool> visited;
vector<pair<int,int>> arr;

void tree_BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;

    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int v: adj[x]){
            if(!visited[v]){
                q.push(v);
                visited[v]=true;
                arr.push_back({x,v});
            }
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
    tree_BFS(u);
    if(arr.size() < V-1){
        cout << -1 << endl;
    }else{
        for(auto it : arr){
            cout << it.first << " " << it.second << endl;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}