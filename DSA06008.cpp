// CHuong trinh dem so cap(x,y)
// thoa man x^y > y^x
#include<bits/stdc++.h>

using namespace std;

// ham tra ve so cap voi x la mot ptu 
// ghep cap vo cac gia tri trong Y[]
// thoa man x^Y[i]>Y[i]^x
// NoOfY luu tru so so luong cac ptu 0,1,2,3,4 in Y[]
int count(int x,int Y[],int n,int NoOfY[]){
	// Neu x=0, khong co gia tri Y nao thoa man
	// x^Y[i]>Y[i]^x
	if(x==0) return 0;
	
	// Neu x=1, so cap bang so cac so '0' trong Y
	if(x==1){
		return NoOfY[0];
	}
	// tim so ptu trong mang Y voi gia tri lon hon
	// X, su dunng upper_bound() de nhan gia tri cua ptu dau tien
	// elements in Y[0,1,2,,.. n-1]
	int* idx=upper_bound(Y,Y+n,x);
	int ans=(Y+n)-idx;
	ans +=(NoOfY[0]+NoOfY[1]);
	if(x==2) ans-=(NoOfY[3]+NoOfY[4]); // 2^3<3^2 va 2^4==4^2
	if(x==3) ans+=NoOfY[2]; // vi 3^2 > 2^3
	 return ans;
	
}
// Funtion return count of pair(x,y) such that
// x^y > y^x

int countPairs(int X[],int Y[],int m,int n){
	int NoOfY[5]={0};
	for(int i=0;i<n;i++){
		if(Y[i]<5){
			NoOfY[Y[i]]++;
		}
	}
	sort(Y,Y+n);
	int total=0;
	for(int i=0;i<m;i++){
		total+=count(X[i],Y,n,NoOfY);
	}
	return total;
}
void solve(){
	int m,n;
	cin >> m >> n;
	int a[m+1],b[n+1];
	for(int i=0;i<m;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	cout << countPairs(a,b,m,n) << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}