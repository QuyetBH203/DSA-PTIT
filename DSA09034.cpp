// dem so ao 
// so lan goi DFS la so ao co trong khu dat trong

#include<bits/stdc++.h>

using namespace std;
const int maxn=505;
int N,M; // kich co cua o dat
void DFS(char a[maxn][maxn],int i,int j,int row,int col){
    if(i<0 || j<0 || i>(row-1) || j >(col-1) || a[i][j] !='W' ){
        return;
    }
    if(a[i][j]=='W'){
        a[i][j]='.';
        DFS(a,i,j+1,row,col);
        DFS(a,i,j-1,row,col);
        DFS(a,i+1,j,row,col);
        DFS(a,i-1,j,row,col);
        DFS(a,i+1,j+1,row,col);
        DFS(a,i+1,j-1,row,col);
        DFS(a,i-1,j+1,row,col);
        DFS(a,i-1,j-1,row,col);
    }
}
void solve(){
    cin >> N >> M;
    char arr[maxn][maxn];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr[i][j];
        }
        
    }
    int count =0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j]=='W'){
                count +=1;
                DFS(arr,i,j,N,M);
            }
        }
    }
    cout << count << endl;

}

int main(){
    solve();

}