#include<bits/stdc++.h>

using namespace std;


int main(){
    
    int n;
    cin >> n;
    int arr[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> arr[i][j];
        }
    }
    vector<int> b[1001];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]==1){
                b[i].push_back(j);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(auto it: b[i]){
            cout << it << " ";
        }
        cout << endl;
    }
   
}