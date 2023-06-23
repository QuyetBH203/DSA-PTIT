#include<bits/stdc++.h>

using namespace std;
string s;
vector<string> vt;
int n;
void check(){
	if(s.front()=='H' && s.back()=='A' && s.find("HH")==-1){
		vt.push_back(s);
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j==0){
			s[i]='A';
		}else{
			s[i]='H';
		}
		if(i==n-1){
			check();
		}else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		s.resize(n);
		vt.clear();
		Try(0);
		for(string j: vt){
			cout << j << endl;
		}
	}
}
