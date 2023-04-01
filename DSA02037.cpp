#include<bits/stdc++.h>

using namespace std;

int n,a[100];
vector<int> b;
vector<vector<int>> ans;

bool check_Prime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void check(){
    int sum=0;
    for(int i: b){
        sum +=i;
    }
    if(check_Prime(sum)){
        ans.push_back(b);
    }

}
// Try liet ke tat ca ca tap con cua mang a
// so tap con cua mang a voi n elements = 2^n 
void Try(int i){
    for(int j=0;j<=1;j++){
        if(j==1) b.push_back(a[i]);
        if(i==n-1) check();
        else Try(i+1);
        if(j==1) b.pop_back();
    }
}
bool cmp(int a,int b){
    return a>b;
}
void solve(){
    cin >> n;
    b.clear(),ans.clear();
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    Try(0);
    for(auto it: ans){
        for(int i: it){
            cout << i << " ";
        }
        cout << endl;
    }
    
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}