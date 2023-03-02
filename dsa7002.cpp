#include<bits/stdc++.h>


using namespace std;

stack<int> st;
int main (){
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		if(s=="PUSH"){
			int n;
			cin >> n;
			st.push(n);
		}else if(s=="POP"){
			if(st.size()>0){
				st.pop();
			}
		}else if(s=="PRINT"){
			if(st.size()==0){
				cout << "NONE" << endl;
				
			}else{
				cout << st.top() << endl;
			}
		}
	}
}
