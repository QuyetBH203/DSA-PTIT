#include<bits/stdc++.h>

using namespace std;

int a[100],n;
bool visited[100];
bool check(int arr[],int n){
    for(int i=2;i<=n;i++){
        if(abs(a[i]-a[i-1])==1) return false;
    }
    return true;
}

void out(int n){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!visited[j]){
            visited[j]=true;
            a[i]=j;
            if(i==n){
                if(check(a,n)){
                    out(n);
                }
            }else{
                Try(i+1);
            }
            visited[j]=false;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(visited,false,sizeof(visited));
        cin >> n;
        Try(1);
    }
}