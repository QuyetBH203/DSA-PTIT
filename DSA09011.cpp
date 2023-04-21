// idea: moi mot dao la mot thanh pha lien thong
// moi 1 hon dao la mot tap hop (i,j) sao cho a[i][j]=1
// so luong dao la so lan goi DFS

#include<bits/stdc++.h>

using namespace std;
const int maxn=505;

void DFS(int arr[maxn][maxn],int i,int j,int row,int col){
    if(i<0 || j< 0 || i>(row-1) || j> (col-1) || arr[i][j] !=1){
        return;
    }
    if(arr[i][j]==1){
        arr[i][j]=0;
        // arr[i][j]=1 thuc hien goi DFS
        // DFS den 8 thanh phan ke xunh quanh a[i][j];
        DFS(arr,i,j+1,row,col);
        DFS(arr,i,j-1,row,col);
        DFS(arr,i+1,j,row,col);
        DFS(arr,i-1,j,row,col);
        DFS(arr,i+1,j+1,row,col);
        DFS(arr,i+1,j-1,row,col);
        DFS(arr,i-1,j+1,row,col);
        DFS(arr,i-1,j-1,row,col);
    }
}


void solve(){
    int n,m;
    cin >> n >> m;
    int a[maxn][maxn];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                count +=1;
                DFS(a,i,j,n,m);
            }
        }
    }
    cout << count << endl;


}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}