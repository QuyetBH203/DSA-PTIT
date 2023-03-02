#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> arr;
vector<bool> visited;
int V, E;
void DFS(int u)
{
    visited[u] = true;
    for (int v : arr[u])
    {
        if (!visited[v])
        {
            DFS(v);
        }
    }
}

bool checkConnectStrongly(int V){
    visited.clear(); visited.resize(1001,false);
    for(int i=1;i<=V;i++){
        visited.clear(); visited.resize(1001,false);
        DFS(i);
        for(int j=1;j<=V;j++){
            if(!visited[j]){
                return false;
            }
        }
    }
    return true;
}
void solve(){
    cin >> V >> E;
    arr.clear(); arr.resize(1001);
    while(E--){
        int x,y;
        cin >> x >> y;
        arr[x].push_back(y);
    }
    if(checkConnectStrongly(V)==true) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}