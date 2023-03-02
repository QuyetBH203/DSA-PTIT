#include<bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>
using namespace std;
  
// Function to find the count of pairs
long long getPairsCount(long long arr[], long long n, long long k)
{
    sort(arr, arr + n);
    long long x = 0, c = 0, y, z;
    for (int i = 0; i < n - 1; i++) {
        x = k - arr[i];
  
        // Lower bound from i+1
        long long  y = lower_bound(arr + i + 1, arr + n, x) - arr;
  
        // Upper bound from i+1
        long long z = upper_bound(arr + i + 1, arr + n, x) - arr;
        c = c + z - y;
    }
    return c;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        long long  arr[n];
        for(auto &x: arr) cin >> x;
        cout << getPairsCount(arr,n,k) << endl;
        /* code */
    }
    
}