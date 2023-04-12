#include<bits/stdc++.h>

using namespace std;
string decode(string str){
    stack<int> intergerstack; // luu cac so nguye
    stack<char> characterstack; // luu cac ki tu
    string temp="",result="";

    // duyet xau str
    for(int i=0;i<str.length();i++){
        int count =0;
        // str[i] la so
        // đẩy vào ngăn xếp
        if(str[i] >= '0' && str[i] <= '9'){
            while(str[i] >='0' && str[i] <='9'){
                count=count*10+str[i]-'0';
                i++;
            }
            i--;
            intergerstack.push(count);
        }
        // nếu str[i]=']' thì pop tất cả các ptu trong ngăn xep
        // cho đến khi không tìm thấy '[' ở trong character stack
        else if(str[i]==']'){
            temp="";
            count =0;
            if(!intergerstack.empty()){
                count=intergerstack.top();
                intergerstack.pop();
            }
            while(!characterstack.empty() && characterstack.top() !='['){
                temp=characterstack.top() + temp;
                characterstack.pop();
            }
            if(!characterstack.empty() && characterstack.top()=='['){
                characterstack.pop();
            }
            // lặp lai xâu temp với số lần là count;
            for(int j=0;j<count;j++){
                result=result + temp;
            }
            // tiếp tục đẩy vào trong ngăn xếp 
            for(int j=0;j<result.length();j++){
                characterstack.push(result[j]);
            }
            result="";

        }else if(str[i]=='['){
            if(str[i-1] >='0' && str[i-1] <='9'){
                characterstack.push(str[i]);
            }else{
                characterstack.push(str[i]);
                intergerstack.push(1);
            }
        }
        else{
            characterstack.push(str[i]);
        }
    }
    while ( !characterstack.empty())
    {
        result=characterstack.top()+result;
        characterstack.pop();
        /* code */
    }
    return result;
    
}
void solve(){
    string s;
    cin >> s;
    cout << decode(s) << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

}