#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
   if (left <= right) {
        int mid = left + (right - left) ;
        if (arr[mid] == x) {  
            return mid;
        }
        if (arr[mid] < x) {        
             return binarySearch(arr, mid + 1, right, x);
        }
        else {                          
             return binarySearch(arr, left, mid - 1, x);
        }
   }
   return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(auto &x: a) cin >> x;
        if(binarySearch(a,0,n-1,k)==-1){
            cout << "NO" << endl;
        }else{
            cout << binarySearch(a,0,n-1,k)+1 << endl;
        }
      
        




    }
    return 0;
}