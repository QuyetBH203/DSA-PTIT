#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int N1,N2,N3;
        cin >> N1 >> N2 >> N3;
        int a[N1],b[N2],c[N3];
        for(auto &x: a) cin >> x;
        for(auto &x: b) cin >> x;
        for(auto &x: c) cin >> x;
        int i,j,z;
        i=j=z=0;
        bool mark=false;
        while (i<N1 && j<N2 && z<N3)
        {
            if(a[i]==b[j]&& a[i]==c[z]){
                cout << a[i] << " ";
                mark=true;
                i++;
                j++;
                z++;
            }
            else if(a[i]<b[j]) i++;
            else if(b[j]<c[z]) j++;
            else z++;
            /* code */
        }
        if(mark==false){
            cout << -1 << endl;
        }
        cout << endl;
        
        
        /* code */
    }
    
}