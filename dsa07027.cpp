#include<bits/stdc++.h>

using namespace std;

void testCase(){
	int n;
	cin >> n;
	int a[n];
	for(auto &x: a) cin >> x;
	
	for(int i=0;i<n;i++){
		int res=-1;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				res=a[j];
				break;
			}
		}
		cout << res << " ";
	}
	cout << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}
