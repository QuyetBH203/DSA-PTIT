#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod=1e9+7;

ll a[11][11],b[11][11];
int n,k;

void multiply(ll a[11][11],ll c[11][11]){
	ll d[11][11]={0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				d[i][j]+=a[i][k]*c[k][j];
				d[i][j]%=mod;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=d[i][j];
		}
	}
}
void power(ll a[11][11],int k){
	if(k==1) return ;
	power(a,k/2);
	multiply(a,a);
	if(k%2 == 1){
		multiply(a,b);
	}
}
void solve(){
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
			b[i][j]=a[i][j];
		}
	}
	power(a,k);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}


