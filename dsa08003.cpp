#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    deque<int> st;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "PUSHFRONT")
        {
            int x;
            cin >> x;
            st.push_front(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (!st.empty())
            {
                cout << st.front() << endl;
            }
            else
            {
                cout << "NONE" << endl;
            }
        }
        else if (s == "POPFRONT")
        {
            if (!st.empty())
            {
                st.pop_front();
            }
        }
        else if (s == "PUSHBACK")
        {
            int x;
            cin >> x;
            st.push_back(x);
        }
        else if (s == "PRINTBACK")
        {
            if (!st.empty())
            {
                cout << st.back() << endl;
            }
            else
            {
                cout << "NONE" << endl;
            }
        }
        else if (s == "POPBACK")
        {
            if (!st.empty())
            {
                st.pop_back();
            }
        }
    }
}