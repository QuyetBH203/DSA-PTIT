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
        for(auto it : arr){
            cout << it << " ";
        }
        cout << endl;
        /* code */
    }
    
}