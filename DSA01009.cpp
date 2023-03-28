#include<bits/stdc++.h>

using namespace std;

int n,k;
string a;
vector<string> res;
// check xem xau co duy nhat mot day con co k ki tu 'A' hay khong
void check(){
	int ok=0;
	for(int i=0;i<n-k+1;i++){
		int count=0;
		for(int j=i;j<i+k;j++){
			if(a[j]=='A') count++;
		}
		if(count==k) ok++;
	}
	if(ok==1){
		res.push_back(a);
	}
}
void Try(int i){
	for(int j='A';j<='B';j++){
		a[i]=j;
		if(i==n-1) check();
		else Try(i+1);
	}
}
void solve(){
	cin >> n >> k;
	a.resize(n);
	Try(0);
	cout << res.size() << endl;
	for(int i=0;i<res.size();i++){
		cout << res[i] << endl;
	}
}
int main(){
	solve();
}




