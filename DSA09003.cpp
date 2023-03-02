#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E; // dinh va canh cua do thi
        cin >> V >> E;
        vector<int> arr[1001];
        for (int i = 1; i <= E; i++)
        {
            int x, y;
            cin >> x >> y;
            arr[x].push_back(y);
        }
        for (int i = 1; i <= V; i++)
        {
            cout << i << ": ";
            for (auto it : arr[i])
            {
                cout << it << " ";
            }
            cout << endl;
        }

        /* code */
    }
}