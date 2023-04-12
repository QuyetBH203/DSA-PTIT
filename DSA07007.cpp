#include<bits/stdc++.h>

using namespace std;
string convert(string& s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            if(s[i-1]=='+' || s[i-1]=='-'){
                st.push(s[i-1]);
            }
        }
        if(st.size() && st.top()=='-'){
            if(s[i]=='+') s[i]='-';
            else if(s[i]=='-') s[i]='+';
        }
        if(st.size() && s[i]==')') st.pop();
    }
    string str="";
    for(int i=0;i<s.length();i++){
       if(s[i] != '(' && s[i] !=')'){
        str +=s[i];
       }  
    }
    return str;
}
void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    if(convert(s1)==convert(s2)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}