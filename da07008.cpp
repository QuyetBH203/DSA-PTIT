#include <bits/stdc++.h>

using namespace std;

// ham tra ve thu tu cua cac toan tu

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
    {
        return -1;
    }
}

// ham chuyen bieu thuc trung to ve bieu thuc hau to

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    string re;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        // neu doc ki tu la mot toan hang, thi luu no vao string re

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            re += c;
        }
        // neu ki tu doc duoc la '(' day vao stack
        else if (c == '(')
        {
            st.push('(');
        }
        // neu ki tu doc duoc la ')
        //  xoa va xuat ra khoi stack cho den khi '(' xuat hien

        else if (c == ')')
        {
            while (st.top() != '(')
            {
                re += st.top();
                st.pop();
            }
            st.pop();
        }
        // neu doc duoc toan tu

        else
        {
            while (!st.empty() && prec(c) <= prec(st.top()))
            {
                re += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        re += st.top();
        st.pop();
    }

    cout << re << endl;
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
    return 0;
}