#include<bits/stdc++.h>

using namespace std;

void daotu(string s){
		
		stack<char> st;
		for(int i=0;i<s.length();i++){
			st.push(s[i]);
		}
		while( !st.empty()){
			cout << st.top();
			st.pop();
		}
		
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string str;
		vector<string> v;
		while(ss >> str){
			v.push_back(str);
		}
		for(auto k: v){
			daotu(k);
			cout << " ";
		}
		cout << endl;
		
	}

}
