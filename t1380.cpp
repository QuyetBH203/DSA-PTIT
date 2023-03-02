#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    s = ' ' + s;
    stack<int> st;
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] == 'D')
        {
            st.push(i);
        }
        else
        {
            cout << i;
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
                /* code */
            }
        }
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
        /* code */
    }
}