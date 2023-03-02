#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        vector<string> v;
        for (auto &x : arr)
        {
            cin >> x;
            v.push_back(to_string(x));
        }
        vector<char> vt;
        for (auto t : v)
        {
            for (char k : t)
            {
                vt.push_back(k);
            }
        }

        set<char> st;
        for (auto t : vt)
        {
            st.insert(t);
        }
        for (auto m : st)
        {
            cout << m << " ";
        }
        cout << endl;

        /* code */
    }
}