#include<bits/stdc++.h>


using namespace std;
int caculator(int x,int y,char c){
    if(c=='+') return x+y;
    else if(c=='-') return x-y;
    else if(c=='*') return x*y;
    else if(c=='/') return x/y;
}
void solve(){
    int n; cin >> n;
    cin.ignore();
    string s; getline(cin,s);
    queue<int> q;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]==' ') continue;
        if(isdigit(s[i])){
            string str="";
            while (isdigit(s[i]))
            {
               str=s[i]+str;
               i--;
            }
            i++;
            q.push(stoi(str));
            
        }else{
            int x=q.front(); q.pop();
            int y=q.front();q.pop();
            int z=caculator(y,x,s[i]);
            q.push(z);

        }
    }
    cout << q.front() << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}