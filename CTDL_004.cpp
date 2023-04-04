#include<bits/stdc++.h>

using namespace std;
int n,k;
vector<vector<int>> ans,bns;
int a[100];
int b[100];

void out(){
	vector<int> v;
	for(int i=1;i<=k;i++){
		v.push_back(a[i]);
	}
	ans.push_back(v);

}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) out();
		else Try(i+1);
		
	}
}
void solve(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	Try(1);
	for(auto it: ans){
		vector<int> d;
		for(int j: it){
			d.push_back(b[j-1]);
		}
		vector<int> e=d;
		sort(e.begin(),e.end());
		if(e==d){
			bns.push_back(d);
		}
	}
	cout << bns.size();
}
int main(){
	solve();
}