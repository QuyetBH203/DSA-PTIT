#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        stack<string> st;

        getline(cin, s);
        stringstream ss(s);
        string str;
        while (ss >> str)
        {
            st.push(str);
            /* code */
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
            /* code */
        }
        cout << endl;

        /* code */
    }
}