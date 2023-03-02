#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '}' && !st.empty() && st.top() == '{')
        {
            st.pop();
        }
        else if (s[i] == ')' && !st.empty() && st.top() == '(')
        {
            st.pop();
        }
        else if (s[i] == ']' && !st.empty() && st.top() == '[')
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}