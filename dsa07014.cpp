#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<int> st;
        string s;
        cin >> s;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (isdigit(s[i]))
            {
                st.push(s[i] - '0');
            }
            else if (s[i] == '+')
            {
                int s1 = st.top();
                st.pop();
                int s2 = st.top();
                st.pop();
                st.push(s2 + s1);
            }
            else if (s[i] == '-')
            {
                int s1 = st.top();
                st.pop();
                int s2 = st.top();
                st.pop();
                st.push(s1 - s2);
            }
            else if (s[i] == '*')
            {
                int s1 = st.top();
                st.pop();
                int s2 = st.top();
                st.pop();
                st.push(s2 * s1);
            }
            else
            {
                int s1 = st.top();
                st.pop();
                int s2 = st.top();
                st.pop();
                st.push(s1 / s2);
            }
        }
        cout << st.top() << endl;
    }
}