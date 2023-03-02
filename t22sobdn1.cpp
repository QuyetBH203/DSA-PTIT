#include<bits/stdc++.h>

using namespace std;

void solve(){
    long long n;
    cin >> n;
    queue<long long> qt;
    qt.push(1);
    int res=0;
    while (1)
    {
        long long temp=qt.front();
        qt.pop();
        if(temp<=n){
            res++;
        }else{
            break;
        }
        qt.push(temp*10);
        qt.push(temp*10+1);

        /* code */
    }
    cout << res << endl;
    
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