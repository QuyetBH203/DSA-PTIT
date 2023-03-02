#include<bits/stdc++.h>

using namespace std;

bool check(int n){
    if(n==0 || n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(check(n)){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }

        /* code */
    }
    
}