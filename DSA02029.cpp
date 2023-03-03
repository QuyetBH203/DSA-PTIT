#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    void move(char from,char to){
        cout << from << " -> " << to << endl;

    }

    void toh(int N,char from,char to,char aux){
        if(N==1){
            move(from,to);
        }else{
            toh(N-1,from,aux,to);
            move(from,to);
            toh(N-1,aux,to,from);
        }
    }
};


int main(){

    Solution ob;
    int n;
    cin >> n;
    ob.toh(n,65,67,66);

}