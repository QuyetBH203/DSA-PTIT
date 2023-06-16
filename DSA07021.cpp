#include<bits/stdc++.h>
// gặp '(' thì push vao ngan xep 
// gặp ')' ,pop() ptu ra khỏi ngăn xếp, có hai trường hợp
// TH 1: stack chưa rỗng thì res=max(res,i-st.top())
// TH2: stack rỗng thì push chỉ số vào để tránh RTE
using namespace std;
void solve(){
    string s; cin >> s;
    stack<int> st;
    st.push(-1);
    int res=0; // do dai day ngoac dung dai nhat
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(i);
        }else{
            st.pop();
            if(st.size() !=0){
               res=max(res,i-st.top());  
            }else{
                st.push(i); // stack rong thi dan toi RTE
            }
        }
    }
    cout << res << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}