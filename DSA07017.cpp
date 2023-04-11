#include<bits/stdc++.h>

using namespace std;
void solve(){
	int n; cin >> n;
	int a[n+1],b[n+1],c[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	stack<int> st;
	for(int i=n;i>=1;i--){
		while(!st.empty() && a[st.top()]<=a[i]){
			st.pop();
		}
		if(st.empty()) b[i]=-1;
		else b[i]=st.top();
		st.push(i);
	}
	while(!st.empty()){
		st.pop();
	}
	for(int i=n;i>=1;i--){
		while(!st.empty() && st.top()>=a[i]){
			st.pop();
		}
		if(st.empty()) c[i]=-1;
		else c[i]=st.top();
		st.push(a[i]);
	}
	for(int i=1;i<=n;i++){
		if(b[i]==-1){
			cout << -1;
		}else{
			cout << c[b[i]];
		}
		cout << " ";
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}