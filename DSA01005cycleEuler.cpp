#include<bits/stdc++.h>

using namespace std;

const int maxn=1001;
int V,E;
vector<vector<int>> arr;
int ra[maxn],vao[maxn];

bool solve(){
    for(int i=1;i<=V;i++){
        if(ra[i] != vao[i]) return false;
    }
    return true;

}
int main(){

    int t; cin >> t;
    while(t--){
        cin >> V >> E;
        arr.clear(); arr.resize(1001);
        memset(ra,0,sizeof(ra));
        memset(vao,0,sizeof(vao));

        while(E--){
            int x,y;
            cin >> x >> y;
            arr[x].push_back(y);
            ra[x]++;
            vao[y]++;

        }
        cout << (solve()? 1:0);
        cout << endl;
    }

}