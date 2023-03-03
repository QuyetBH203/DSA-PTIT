#include<bits/stdc++.h>

using namespace std;

int n;
string s;

void solve(){
    string str=s;
    reverse(str.begin(),str.end());
    if(str==s){
        for(char i: s){
            cout << i << " ";
        }
        cout << endl;
    }
}

void Try(int i){
    for(int j=0;j<=1;j++){
        s[i]=j+'0';
        if(i==n-1){
            solve();
        }else{
            Try(i+1);
        }
    }
}
int main(){
    cin >> n;
    s.resize(n);
    Try(0);
}