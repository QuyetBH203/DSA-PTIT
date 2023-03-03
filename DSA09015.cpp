#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> arr;
int color[1001];
int V,E;
void inp(){
    for(int i=1;i<=E;i++){
        int x,y;
        cin >> x >> y;
        arr[x].push_back(y);
    }
    memset(color,0,sizeof(color));
}
bool DFS(int u){
    color[u]=1;
    for(int v: arr[u]){
        if(color[v]==0){
            if(DFS(v)) return true;
        }else if(color[v]==1){
            return true;
        }

    }
    color[u]=2;
    return false;

}
void solve(){
    cin >> V >> E;
    arr.clear(); arr.resize(1001);
    inp();
    for(int i=1;i<=V;i++){
        if(color[i]==0){
            if(DFS(i)){
                cout << "YES";
                return ;
            }
        }
    }
    cout << "NO";
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
        /* code */
    }
    
    

}