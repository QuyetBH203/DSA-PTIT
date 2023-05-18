#include<bits/stdc++.h>

using namespace std;
const int maxn=10000;
int sum_1(int arr[],int l,int m,int h){
    int sum=0, sum_left=INT_MIN,sum_right=INT_MIN;
    for(int i=m;i>=l;i--){
        sum+=arr[i];
        if(sum > sum_left){
            sum_left=sum;
        }
    }
    sum=0;
    for(int i=m+1;i<=h;i++){
        sum+=arr[i];
        if(sum>sum_right){
            sum_right=sum;
        }
    }
    return sum_left +sum_right;
}
int max_sub_arr(int arr[],int l,int h){
    if(l==h) return arr[l];
    int m=(l+h)/2;
    return max({max_sub_arr(arr,l,m),max_sub_arr(arr,m+1,h),sum_1(arr,l,m,h)});
}
void solve(){
    int arr[maxn];
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << max_sub_arr(arr,0,n-1) << endl;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    
}