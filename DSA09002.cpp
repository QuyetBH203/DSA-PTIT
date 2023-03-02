// chuyển từ danh sách kề sang danh sách cạnh
// vì không biết trước số đỉnh kề nên ta đọc dữ liệu đầu vào như một xâu kí tự
// sau đó phân tách để biết trước số đỉnh kề
// dùng pair để lưu trữ các cặp cạnh
#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> vt;
int main()
{
    int N;
    cin >> N;
    cin.ignore();
    for (int i = 1; i <= N; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num)
        {
            if (num > i)
            {
                vt.push_back({i, num});
            }

            /* code */
        }
    }
    for (auto it : vt)
    {
        cout << it.first << " " << it.second << endl;
    }
}