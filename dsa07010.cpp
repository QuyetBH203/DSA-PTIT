#include <bits/stdc++.h>

using namespace std;

bool check(char x)
{
    if (x == '+')
        return true;
    else if (x == '-')
        return true;
    else if (x == '*')
        return true;
    else if (x == '/')
        return true;
    else if (x == '^')
        return true;
    else
    {
        return false;
    }
}

void testCase()
{
    string s;
    cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (check(s[i]))
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string tmp = s1 + s2 + s[i];
            st.push(tmp);
        }
        else
        {
            st.push(string(1, s[i]));
        }
    }
    cout << st.top() << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
    }
    return 0;
}