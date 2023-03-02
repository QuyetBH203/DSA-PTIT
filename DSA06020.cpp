#include<bits/stdc++.h>

using namespace std;

int linearSearch(int arr[],int N,int k){
    for(int i=0;i<N;i++){
        if(arr[i]==k){
            return 1;
        }
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int N,k;
        cin >> N >> k;
        int arr[N];
        for(auto &x: arr) cin >> x;
        cout << linearSearch(arr,N,k) << endl;
        
    }
    
}