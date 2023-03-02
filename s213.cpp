#include <bits/stdc++.h>

using namespace std;

vector<string> v;

void solve()
{
    queue<string> q;
    q.push("6");
    q.push("8");
    v.push_back("6");
    v.push_back("8");

    while (1)
    {
        string st = q.front();
        if (st.length() == 15)
            break;
        q.pop();
        v.push_back(st + "6");
        v.push_back(st + "8");

        q.push(st + "6");
        q.push(st + "8");
    }
}

int main()
{
    int t;
    cin >> t;
    solve();
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s;
        for (auto x : v)
        {
            if (x.length() == n + 1)
            {
                break;
            }
            else
            {
                s.push_back(x);
            }
        }
        reverse(s.begin(), s.end());
        cout << s.size() << endl;
        for (auto k : s)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}