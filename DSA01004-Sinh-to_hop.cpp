#include<bits/stdc++.h>

using namespace std;

int n,k;
int A[100];
void out(){
    for(int i=1;i<=k;i++){
        cout << A[i];
    }
    cout << " ";
}
void Try(int i){
    for(int j=A[i-1]+1;j<=n-k+i;j++){
        A[i]=j;
        if(i==k){
            out();
        }else{
            Try(i+1);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try(1);
        cout << endl;

        /* code */
    }
    
}