#include<bits/stdc++.h>
using namespace std;
int a[100];
bool vs[100];
int N;
void out(){
    for(int i=1;i<=N;i++){
        cout << a[i];
    }
    cout << " ";
}
void Try(int i){
    for(int j=1;j<=N;j++){
        if(!vs[j]){
            a[i]=j;
            vs[j]=true;
            if(i==N) out();
            else Try(i+1);
            vs[j]=false;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(vs,false,sizeof(vs));
        cin >> N;
        Try(1);
        cout << endl;

    }
}