#include<bits/stdc++.h>

using namespace std;
int n;
vector<int> a,b;
vector<vector<int>> res;

void check(){
	if(b.size()<2) return;
	vector<int> c(b.begin(),b.end());
	sort(c.begin(),c.end());
	if(b==c) res.push_back(b);
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j==1) b.push_back(a[i]);
		if(i==n-1) check();
		else Try(i+1);
		if(j==1) b.pop_back();
	}
}
bool cmp(vector<int> a,vector<int> b){
	string x="",y="";
	for(int i: a) x +=to_string(i)+" ";
	x.pop_back(); // delete lats space
	for(int i: b) y +=to_string(i)+" ";
	y.pop_back(); // delete last space
	return x < y;
}
void solve(){
	cin >> n;
	a.resize(n);
	for(int &x: a) cin >> x;
	Try(0);
	sort(res.begin(),res.end(),cmp);
	for(auto it: res){
		for(int j: it){
			cout << j << " ";
		}
		cout << endl;
	}
}
int main(){
	solve();
	
}