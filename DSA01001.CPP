#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k = s.length() - 1;
        while (s[k] == '1')
        {
            s[k] = '0';
            k--;
        }
        if (k != 0)
        {
            s[k] = '1';
        }
        cout << s << endl;
    }
}