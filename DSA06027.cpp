#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> V;

void sort_Swap(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
        vector<int> a(arr, arr + n);
        V.push_back(a);
    }
    V.reserve(V.size());
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        V.clear();
        sort_Swap(arr, n);
        for (int i = V.size() - 1; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (auto it : V[i])
            {
                cout << it << " ";
            }
            cout << endl;
        }
        /* code */
    }
}