#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll F[93];
ll k;
int n;


char check(int n,ll k){
    if(n==1 && k==1) return '0';
    if(n==2 && k==1) return '1';
    else if(k>F[n-2]) return check(n-1,k-F[n-2]);
    return check(n-2,k);
}

int main(){
    int t; cin >> t;
    F[1]=F[2]=1;
    for(int i=3;i<=92;i++){
        F[i]=F[i-2]+F[i-1];
    }
    while(t--){
        cin >> n >> k;
        cout << check(n,k) << endl;
    }

}