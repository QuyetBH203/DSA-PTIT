// kiem tra chu trinh bang DFS xem do thi co canh nguoc hay khong 
// canh nguoc la canh di tu to tien den con chau
#include<bits/stdc++.h>

using namespace std;
bool visited[1005];
vector<int> arr[1005];
int parent[1005];
int n,m; // dinh, canh cua do thi
int st=0,en=0;
bool DFS(int u){
    
    visited[u]=true;
    for(int v: arr[u]){
        if(!visited[v]){
            
            parent[v]=u;
            if(DFS(v)) return true;
        }else{
            if( v==1 && parent[u] != 1){
                st=v, en=u;
                return true;
            }
        }
    }
    return false;
}
void solve(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        arr[i].clear();
    }
    
    memset(visited,false,sizeof(visited));
    memset(parent,0,sizeof(parent));
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(arr[i].begin(),arr[i].end());
    }
    if(DFS(1)){
        vector<int> cycle;
        cycle.push_back(st);
        while(en !=st){
            cycle.push_back(en);
            en=parent[en];
        }
        cycle.push_back(st);
        reverse(cycle.begin(),cycle.end());
        for(int j: cycle){
            cout << j << " ";
        }
    }else{
        cout << "NO";
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}