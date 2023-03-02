#include<bits/stdc++.h>

using namespace std;

stack<int> st;

void show(){
	stack<int> s1=st;
	vector<int> v;
	while( !s1.empty()){
		int b=s1.top();
		v.push_back(b);
		s1.pop();
	}
	for(int i=v.size()-1;i>=0;i--){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	string s;
	while(1){
		cin >> s;
		if(s=="push"){
			int n;
			cin >> n;
			st.push(n);
		} else if(s== "show"){
			show();
		} else if(s== "pop"){
			st.pop();
		}
		if(st.size()==0){
			cout << "empty";
			break;
		}
	}
	
	 
}
