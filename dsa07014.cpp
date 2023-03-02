#include <bits/stdc++.h>

using namespace std;

bool check(char x)
{
    return isdigit(x);
}
void testCase()
{
    string s;
    cin >> s;
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (check(s[i]))
        {
            int s1 = s[i] - '0';
            st.push(s1);
        }
        else
        {
            int s2 = st.top();
            st.pop();
            int s3 = st.top();
            st.pop();
            if (s[i] == '+')
            {
                int s4 = s2 + s3;
                st.push(s4);
            }
            else if (s[i] == '-')
            {
                int s4 = s2 - s3;
                st.push(s4);
            }
            else if (s[i] == '*')
            {
                int s4 = s2 * s3;
                st.push(s4);
            }
            else if (s[i] == '/')
            {
                int s4 = s2 / s3;
                st.push(s4);
            }
            else if (s[i] == '^')
            {
                int s4 = s2 ^ s3;
                st.push(s4);
            }
            else if (s[i] == '%')
            {
                int s4 = s2 % s3;
                st.push(s4);
            }
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