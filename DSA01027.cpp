#include<bits/stdc++.h>


using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i: a) cin >> i;
    sort(a.begin(),a.end());
    for(auto it: a){
        cout << it << " ";
    }
    cout << endl;
    while (next_permutation(a.begin(),a.end()))
    {
        for(auto it: a){
            cout << it << " ";
        }
        cout << endl;
        /* code */
    }
    
    
    
    
}