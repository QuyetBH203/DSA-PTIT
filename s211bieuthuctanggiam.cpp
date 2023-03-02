#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        
        string s;
        cin >> s;
        s = ' ' + s;
        stack<int> st;
        cout << "Test " << j << ": ";
        for (int i = 1; i <= s.length(); i++)
        {
            if (s[i] == 'D')
            {
                st.push(i);
            }
            else
            {
               
                cout << i;
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                    /* code */
                }
            }
        }
        cout << endl;
    }
}