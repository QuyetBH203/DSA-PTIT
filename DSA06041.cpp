#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        map<int, int> mp;
        for (auto &x : arr)
        {
            cin >> x;
            mp[x]++;
        }
        vector<int> vt;
        for (auto it : mp)
        {
            if (it.second > N / 2)
            {
                vt.push_back(it.first);
            }
        }
        if (vt.size() == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << vt[0] << endl;
        }

        /* code */
    }
}