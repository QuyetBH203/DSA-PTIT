#include<bits/stdc++.h>

using namespace std;
int arr[1005];
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		bool ans=next_permutation(arr,arr+n);
		if(ans){
			for(int i=0;i<n;i++){
				cout << arr[i] << " ";
			}
			cout << endl;
		}else{
			sort(arr,arr+n);
			for(int i=0;i<n;i++){
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	}
}
