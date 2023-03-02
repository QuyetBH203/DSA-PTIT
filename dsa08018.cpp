#include <bits/stdc++.h>

using namespace std;

vector<string> v;

void init()
{
    queue<string> q;
    q.push("6");
    q.push("8");
    v.push_back("6");
    v.push_back("8");

    while (1)
    {
        string top = q.front();
        q.pop();
        if (top.length() == 15)
            break;
        v.push_back(top + "6");
        v.push_back(top + "8");
        q.push(top + "6");
        q.push(top + "8");
    }
}

int main()
{
    int t;
    cin >> t;
    init();
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> st;
        for (auto x : v)
        {
            if (x.length() == n + 1)
                break;
            else
            {
                st.push_back(x);
            }
        }
        cout << st.size() << endl;
        for (auto k : st)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}