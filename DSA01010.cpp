#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        set<int> st;
        
        int a[k+1],b[k+1];
        for(int i=1;i<=k;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        for(int i=1;i<=k;i++){
            st.insert(b[i]);
        }
        
        int i=k;
        while(a[i]==n-k+i && i>0){
            i--;
        }
        if(i==0){
            cout << k << endl;
        }else{
            a[i]++;
            for(int j=i+1;j<=k;j++){
                a[j]=a[i]+j-i;
            }
            for(int i=1;i<=k;i++){
                st.insert(a[i]);
            }
            cout << st.size()-k << endl;
           
        }
        /* code */
    }
    
}