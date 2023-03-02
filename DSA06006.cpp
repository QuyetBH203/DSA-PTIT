#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(auto &x: arr) cin >> x;
        sort(arr,arr+n);
        for(auto t: arr){
            cout << t << " ";
        }
        cout << endl;
        /* code */
    }
    
}