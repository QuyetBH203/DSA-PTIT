#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m; // so luong phan tu cua hai mang a,b
        int a[n],b[m];
        vector<int> vt;
        for(auto &x: a){
            cin >> x;
            vt.push_back(x);

        }
        for(auto &y: b){
            cin >> y;
            vt.push_back(y);
        }
        sort(vt.begin(),vt.end());
        for(auto it: vt){
            cout << it << " ";
        }
        cout << endl;
        /* code */
    }
    
}