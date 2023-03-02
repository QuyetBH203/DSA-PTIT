#include<bits/stdc++.h>

using namespace std;

vector<string> v;

void init(){
    queue<string> q;
    q.push("1");
    v.push_back("1");
    while(v.size()<10000){
        string st=q.front();
        q.pop();
        v.push_back(st+"0");
        v.push_back(st+"1");
        q.push(st+"0");
        q.push(st+"1");
    }
}


int main(){
    int t;
    cin >> t;
    init();
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
}