#include<bits/stdc++.h>

using namespace std;


vector<vector<int>> arr;
vector<bool> visited;

void DFS(int s) {
    stack<int> st;
    st.push(s);
    visited[s] = 1;
    while (!st.empty()) {
        int u = st.top(); st.pop();
        for (int v : arr[u]) {
            if (!visited[v]) {
                visited[v] = 1;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

void solve(){
	int V,E;
	cin >> V >> E;
	arr.clear(); arr.resize(1001);
	visited.clear(); visited.resize(1001,0);
	for(int i=1;i<=E;i++){
		int x,y;
		cin >> x >> y;
		arr[x].push_back(y);
		arr[y].push_back(x);
	}
	int ans=0;
	for(int i=1;i<=V;i++){
		if(!visited[i]){
			ans++;
			DFS(i);
		}
	}
	cout << ans << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
