// chuuyển đổi danh sách cạnh sang danh sách kề
#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int V,E;
        cin >> V >> E;
        vector<int> arr[1001]; // dung mang cac vector

        // Duyệt qua E cạnh của đồ thị
        for(int i=0;i< E;i++){
            int x,y;
            cin >> x >> y;
            arr[x].push_back(y);
            // arr[y].push_back(x);
        }
        // Duyệt qua V đỉnh của đồ thị để in ra các đỉnh kề với đỉnh đó
        for(int i=1;i<=V;i++){
            cout << i << ": ";
            for(int j: arr[i]){
                cout << j << " ";
            }
            cout << endl;

        }
        cout << endl;
        
         /* code */
    }
    

}