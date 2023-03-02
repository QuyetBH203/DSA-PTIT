#include<bits/stdc++.h>

using namespace std;

void solve(){
   int n,m,k;
   cin >> n >> m >> k;
   int a[n],b[m];
   vector<int> v;
   for(auto &x: a){
    cin >> x;
    v.push_back(x);
   }
   for(auto &y: b){
    cin >> y;
    v.push_back(y);
   }
   sort(v.begin(),v.end());
   cout << v[k-1] << endl;

  
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();

        /* code */
    }
    
}