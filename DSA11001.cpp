#include<bits/stdc++.h>

using namespace std;
bool isDigit(char x){
    return (x=='+' or x =='-' or x=='*' or x=='/' or x=='^');

}
void solve(){
    string s;
    cin >> s;
    stack<string> st;
    
    for(char i: s){
        string str="";
        if(isDigit(i)){
            string s1= st.top(); st.pop();
            string s2=st.top(); st.pop();
            str +=s2 + i + s1;

        }else{
           str +=i;
        }
        st.push(str);
    }
    cout << st.top() << endl;

}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

}