#include<bits/stdc++.h>
#include<stack> 

// LIFO(LAST IN FIRST OUT)
// push day 1 ptu vao trong nga sep
//pop
//size
//empty
//top 
using namespace std;


int main(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout << st.top() << endl;
	st.pop();

	cout << st.size() << endl;

}
