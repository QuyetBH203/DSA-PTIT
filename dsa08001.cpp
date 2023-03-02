#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    queue<int> st;
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        if (k == 2)
        {
            if (st.empty())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (k == 1)
        {
            cout << st.size() << endl;
        }
        else if (k == 3)
        {
            int m;
            cin >> m;
            st.push(m);
        }
        else if (k == 4)
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else if (k == 5)
        {
            if (!st.empty())
            {
                cout << st.front() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (k == 6)
        {
            if (!st.empty())
            {
                cout << st.back() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
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