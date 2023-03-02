#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> V;

void buble_Sort(int arr[],int n){
    bool check=false;
    for(int i=0;i<n-1;i++){
        check=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                check=true;
            }
        }
        if(check==false) break;
        vector<int> a(arr,arr+n);
        V.push_back(a);
    }
    V.reserve(V.size());
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(auto &x: arr) cin >> x;
        V.clear();
        buble_Sort(arr,n);
        for(int i=V.size()-1;i>=0;i--){
            cout << "Buoc " << i+1 << ": ";
            for(auto it: V[i]){
                cout << it << " ";
            }
            cout << endl;
        }
        /* code */
    }
    
}