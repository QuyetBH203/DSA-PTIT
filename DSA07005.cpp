#include <bits/stdc++.h>

using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            if (s[i - 1] == '+' || s[i - 1] == '-')
                st.push(s[i - 1]);
        }
        if (st.size() && st.top() == '-')
        {
            if (s[i] == '+')
                s[i] = '-';
            else if (s[i] == '-')
                s[i] = '+';
        }
        if (s[i] == ')' && st.size())
            st.pop(); // thể hiện đã thực hiên việc xét các dấu tron '()' rồi.
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '(' && s[i] != ')')
            cout << s[i];
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}