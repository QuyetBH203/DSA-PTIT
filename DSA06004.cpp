#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        set<int> st;
        map<int, int> mp;
        vector<int> vt;
        for (auto &x : a)
        {
            cin >> x;
            vt.push_back(x);
            st.insert(x);
        }
        for (auto &k : b)
        {
            cin >> k;
            vt.push_back(k);
            st.insert(k);
        }
        sort(vt.begin(), vt.end());
        for (auto it : vt)
        {
            mp[it]++;
        }
        for (auto it : st)
        {
            cout << it << " ";
        }
        cout << endl;
        for (auto p : mp)
        {
            if (p.second > 1)
            {
                cout << p.first << " ";
            }
        }
        cout << endl;

        /* code */
    }
}