#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,i,j,F[10002],n;
    cin >> t;
    F[1]=1,F[2]=2,F[3]=3;
    for(int i=1;i<=10000;i++){
        F[i]=i;
        for(int j=1;j<=sqrt(i);j++){
            F[i]=min(F[i],F[i-j*j]+1);

        }
    }
    while (t--)
    {
        cin >> n;
        cout << F[n] << endl;
        /* code */
    }
    
}