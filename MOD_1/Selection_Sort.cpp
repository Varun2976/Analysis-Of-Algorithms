#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(vector<int>&arr, int n){
    for(int i = 0 ; i < n-1 ;i++){
        for(int j = i+1 ; j < n;j++){
            if(arr[i] > arr[j]){
                swap(arr[i] , arr[j]);
            }
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

    Selection_Sort(arr,n);

    for(int c : arr){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}