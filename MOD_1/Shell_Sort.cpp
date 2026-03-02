#include <bits/stdc++.h>
using namespace std;

void Shell_Sort(vector<int>&arr, int n){
    for(int gap = n/2 ; i > 0 ; gap /= 2){
        for(int i = gap ; i < n ;i++){
            int temp = arr[i];
            int j = i;
            while(j >= gap && arr[j-gap] > temp){
                arr[j-gap] = arr[j];
                j = j - gap;
            }
            arr[j] = temp;
        }
    }
}
int main(){
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    }

    Shell_Sort(arr,n);

    for(int c : arr){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}