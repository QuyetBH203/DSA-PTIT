#include<bits/stdc++.h>

using namespace std;
const int maxn=105;
const int inf=1e9+7;
int arr[maxn][maxn];
int n,m;

void Floyd(){
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			arr[i][j]=inf;
		}
		arr[i][i]=0;
	}
	
	while(m--){
		int x,y,w;
		cin >> x >> y >> w;
		arr[x][y]=arr[y][x]=w;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
			}
		}
	}
	int q; cin >> q;
	while(q--){
		int a,b;
		cin >> a >> b;
		cout << arr[a][b] << endl;
	}
}
int main(){
	Floyd();

}