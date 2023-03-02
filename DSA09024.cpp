#include<bits/stdc++.h>

using namespace std;
int V,E; // V,E la so dinh va so canh cua do thi
int u; // u la dinh bat dau duyet
bool visited[1001];
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        cin >> V >> E >> u;
        memset(visited,false,sizeof(visited));
        vector<int> arr[1001];
        for(int i=1;i<=E;i++){
            int x,y;
            cin >> x >> y;
            arr[x].push_back(y);
            // arr[y].push_back(x);
        }
        queue<int> q;
        q.push(u);
        visited[u]=true;
        while (! q.empty()){
            int v=q.front();
            q.pop();
            cout << v << " ";
            // Duyệt cac đỉnh kề với đỉnh V mà chưa được thăm sau đó
            // đẩy vào hàng đợi

            for(int x: arr[v]){
                if(!visited[x]){
                    q.push(x);
                    visited[x]=true;
                }
            }
        }
        cout << endl;
        

        /* code */
    }
    
}