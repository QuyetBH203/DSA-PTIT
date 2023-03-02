#include <bits/stdc++.h>

using namespace std;

bool cmp(long long a, long long b)
{
    return a > b;
}

void solve()
{
    int n;
    cin >> n;
    vector<long long> vt;
    queue<string> qt;
    vt.push_back(6);
    vt.push_back(8);
    qt.push("6");
    qt.push("8");
    while (1)
    {
        string str = qt.front();
        qt.pop();
        if (str.size() == n)
        {
            break;
        }
        vt.push_back(stoll(str + "6"));
        vt.push_back(stoll(str + "8"));
        qt.push(str + "6");
        qt.push(str + "8");
        /* code */
    }
    sort(vt.begin(), vt.end(), cmp);

    cout << vt.size() << endl;
    for (auto it : vt)
    {
        cout << it << " ";
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
