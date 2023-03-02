// chuyen tu danh sach ke sang ma tran ke

// Dòng đầu tiên chứa số nguyên n – số đỉnh của đồ thị (1 ≤  n ≤  1000). n dòng tiếp theo,
// dòng thứ i chứa các số nguyên là các đỉnh kề với đỉnh i.
// Không biết trước số đỉnh kề với đỉnh i
// coi dong thu i nhu la mot xau ki tu,doc tu ban phim
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n; cin.ignore();
    int a[n + 1][n + 1] = {};
    for (int i = 1; i <= n; ++i) {
        string s; getline(cin, s);
        stringstream ss(s);
        int x;
        while (ss >> x) {
            a[i][x] = 1;
            a[x][i] = 1;
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
   

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}