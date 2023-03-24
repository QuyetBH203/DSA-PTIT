//sumofdigit[i]=(i+1)*num i + 10*sumofdigit[i-1];
#include<bits/stdc++.h>
using namespace std;

int digit_to_number(char c){
    return(c-48);
}

void solve(){
    string s;
    cin >> s;
    int n=s.length();
    long long  sumofdigit[n];
    sumofdigit[0]=digit_to_number(s[0]);
    long long res=sumofdigit[0];
    for(int i=1;i<s.length();i++){
        sumofdigit[i]=(i+1)*digit_to_number(s[i])+10*sumofdigit[i-1];
        res +=sumofdigit[i];
    }
    cout << res << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}