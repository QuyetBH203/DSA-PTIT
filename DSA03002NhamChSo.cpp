#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    string s=to_string(a);
    string str=to_string(b);
    for(int i=0;i<s.size();i++){
        if(s[i]=='6') s[i]='5';
    }
    for(int i=0;i<str.size();i++){
        if(str[i]=='6') str[i]='5';
    }
    cout << stoll(s)+stoll(str) << " ";
    for(int i=0;i<s.size();i++){
        if(s[i]=='5') s[i]='6';
    }
    for(int i=0;i<str.size();i++){
        if(str[i]=='5') str[i]='6';
    }
    cout <<stoll(s)+stoll(str);
}