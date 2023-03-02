// su dung phuong phap ma tran de tinhs so fibonaxi thu n
// O(log n)

#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int mod=1e9+7;

void multiply(ll F[2][2],ll M[2][2]){
	ll x=(F[0][0]*M[0][0]%mod+F[0][1]*M[1][0]%mod)%mod;
	ll y=(F[0][0]*M[0][1]%mod+F[0][1]*M[1][1]%mod)%mod;
	ll z=(F[1][0]*M[0][0]%mod+F[1][1]*M[1][0]%mod)%mod;
	ll w=(F[1][0]*M[0][1]%mod+F[1][1]*M[1][1]%mod)%mod;
	F[0][0]=x;
	F[0][1]=y;
	F[1][0]=z;
	F[1][1]=w;
}
void power(ll F[2][2],ll n){
	if(n<=1) return;
	ll M[2][2]={{1,1},{1,0}};
	power(F,n/2);
	multiply(F,F);
	if( n%2 !=0){
		multiply(F,M);
	}
}
void solve(){
	ll n; cin >> n;
	if(n==0) cout << 0 << endl;
	ll F[2][2]={{1,1},{1,0}};
	power(F,n-1);
	cout << F[0][0] << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
	
}
