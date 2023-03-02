#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> arr(1001);
vector<bool> visited(100,0);



void tranfer(int b[100][100],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(b[i][j]==1){
				arr[i].push_back(j);
			}
		}
	}

}
void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while( !q.empty()){
		int x=q.front();
		q.pop();
		cout << x << " ";
		for(int y: arr[x]){
			if(!visited[y]){
				q.push(y);
				visited[y]=true;
			}
		}
	}
	
}

int main(){
	int t=2;
	while(t--){
		int n;
		cin >> n;
		int a[100][100];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin >> a[i][j];
			}
		}
		
		arr.clear();
		arr.resize(1001);
		
		visited.clear();
		visited.resize(100,0);
		tranfer(a,n);
		BFS(1);
		
	}
	
}
