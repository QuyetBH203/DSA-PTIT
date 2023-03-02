#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> arr;
vector<int> parent;
int V, E,s,t;

void DFS(int u){
   visited[u]=true;
   for(int v: arr[u]){
    if(!visited[v]){
        parent[v]=u;
        DFS(v);
    }
   }
}
void solve(){
    cin >> V >> E >> s >> t;
    
    visited.clear(); visited.resize(V+1,0);
    arr.clear(); arr.resize(V+1);
    parent.clear(); parent.resize(V+1,-1);
    for(int i=1;i<=E;i++){
        int x,y;
        cin >> x >> y;
        arr[x].push_back(y);
        // arr[y].push_back(x);
    }
    DFS(s);
    if(!visited[t]){
        cout << -1 << endl;
    }else{
        vector<int> res;
        while( t!=s){
            res.push_back(t);
            t=parent[t];
        }
        res.push_back(s);
        reverse(res.begin(),res.end());
        for(int x: res){
            cout << x << " ";
        }
    }
    cout << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

}