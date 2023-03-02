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
        set<int> se;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            se.insert(arr[i]);
        }
        vector<int> vt(se.begin(),se.end());
        if(vt.size()==1){
            cout << -1 << endl;
        }else{
            cout << vt[0] << " " << vt[1] << endl;
        }
        /* code */
    }
    
}