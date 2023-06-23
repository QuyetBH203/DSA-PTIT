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
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        do
        {
            for (auto x : v)
            {
                cout << x;
            }
            cout << " ";
        } while (prev_permutation(v.begin(), v.end()));
        cout << endl;
        /* code */
    }
}