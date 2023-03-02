#include <bits/stdc++.h>

using namespace std;

vector<string> v;

void init()
{
    queue<string> st;
    st.push("6");
    st.push("8");
    v.push_back("6");
    v.push_back("8");

    while (1)
    {
        string top = st.front();
        st.pop();
        if (top.length() == 15)
            break;
        v.push_back(top + "6");
        v.push_back(top + "8");
        st.push(top + "6");
        st.push(top + "8");
    }
}

int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> vt;
        for (auto x : v)
        {
            if (x.length() == n + 1)
                break;
            else
            {
                vt.push_back(x);
            }
        }
        reverse(vt.begin(), vt.end());
        for (auto k : vt)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}