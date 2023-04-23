#include<bits/stdc++.h>

using namespace std;
int n,m; // dinh, canh cua do thi
vector<int> arr[1001];
bool visited[1001];
bool check_Hamilton(int i,int dem){
	if(dem==n) return true;
	visited[i]=true;
	for(int j=0;j<arr[i].size();j++){
		if(!visited[arr[i][j]] && check_Hamilton(arr[i][j],dem+1)) return true;
	}
	visited[i]=false;
	return false;
}
void solve(){
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		arr[i].clear();
	}
	for(int i=1;i<=m;i++){
		int x,y;
		cin >> x >> y;
		arr[x].push_back(y);
		arr[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
	int check=0;
	for(int i=1;i<=n;i++){
		if(check_Hamilton(i,1)){
			check=1;
			break;
		}
	}
	if(check==1){
		cout << 1 << endl;
	}else{
		cout << 0 << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	
}