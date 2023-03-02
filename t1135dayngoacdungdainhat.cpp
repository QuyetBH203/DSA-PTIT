#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    string s;
    cin >> s;
    stack<int> st; // luu vi  tri cac dau ngoac sai

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')' && !st.empty() && s[st.top()] == '(')
        {
            st.pop();
        }
        else
        {
            st.push(i);
        }
    }
    if (st.empty())
    {
        cout << s.length() << endl;
        return;
    }
    vector<int> v;
    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    sort(v.begin(), v.end());
    if (v.front() != 0)
    {
        v.insert(v.begin(), -1);
    }
    if (v.back() != s.length() - 1)
    {
        v.insert(v.end(), s.length());
    }
    int res = 0;
    for (int i = 1; i < v.size(); i++)
    {
        res = max(res, v[i] - v[i - 1] - 1); // hieu vi tri giua cac dau ngoac sai la ra do dai cua day ngoac lon nhat 
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
    }
}