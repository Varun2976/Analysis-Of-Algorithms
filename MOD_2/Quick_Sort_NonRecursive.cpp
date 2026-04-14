#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int>freq;

int partition(vector<int>&arr,int low,int high,unordered_map<int,int>&freq){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while(true){
        while(i < high && freq[arr[i]] >= freq[pivot]){
        i++;
        }
        while(j > low && freq[arr[j]] < freq[pivot]){
            j++;
        }
        if(i >= j){
            break;
        }
        swap(arr[i],arr[j]);
    }
    swap(arr[low] , arr[j]);
    return j;
    

}


int main(){
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    }
    for(int c : arr){
        freq[c]++;
    }
    Iterative_Quick_Sort(arr,freq);

    for(int c : arr){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}