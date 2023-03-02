#include<bits/stdc++.h>

using namespace std;

void inpt(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sap_xep_chon(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[min_idx],arr[i]);
        cout << "Buoc " << i+1 << ": ";
        inpt(arr,n);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(auto &x: arr){
        cin >> x;

    }
    sap_xep_chon(arr,n);
    return 0;

}