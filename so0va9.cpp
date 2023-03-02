#include<bits/stdc++.h>

using namespace std;
vector<long long > v;

long long a[101];


void init(){
    queue<string> q;
    v.push_back(9);
    q.push("9");
    while(1){
        string st=q.front();
        q.pop();
        if(st.length()==10) break;

        v.push_back(stoll(st+"0"));
        v.push_back(stoll(st+"9"));

        q.push(st+"0");
        q.push(st+"9");
    }
    for(int i=1;i<=100;i++){
        for(auto x: v){
            if(x%i==0){
                a[i]=x;
                break;
            }
        }
    }
}

int main(){
    init();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;

}