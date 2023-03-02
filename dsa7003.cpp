//du thua cac cap '(' va ')' khi khong du cap hoac khong co phep toan trong cap ngoac nay
// ((a+b))
#include<bits/stdc++.h>

using namespace std;

void testCase(){
	string s;
	getline(cin,s);
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i] !=')'){
			st.push(s[i]);
		}else{
			bool check=0;
			while(st.size() !=0){
				char c=st.top();
				st.pop();
				if(c == '(') break;
				if( c=='+' || c== '-'|| c=='*'|| c=='/') check=1;
			} 
			if(check== 0){
				cout << "Yes" << endl;
				return;
			}
		}
	}
	cout << "No" << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		testCase();
	}
}
