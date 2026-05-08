#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &a , int low , int high){
    int i = low;
    int j = mid +1;
    int k = low;
    vector
    while(i <= mid && j <= high){
        if(a[i] < a[j]){
            T[k] = a[i];
            i= i + 1;
        }else{
            T[k] = a[j];
            j= j+1;
        }
        k=k+1;
    }
    while(i <= mid){
        T[k] = a[i];
        i= i+1;
        k=k+1;
    }
    while(j <= high){
        T[k] = a[j];
        j = j + 1;
        k = k + 1;
    }
}
void Merge_Sort(vector<int> &arr,int n,int low,int high,int mid){
    mid = (low+high)/2;
    if(low < high){
        Merge_Sort(a,low,mid);
        Merge_Sort(a,mid+1,high);
        Merge();
    }
}
int main(){
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    }

    Merge_Sort(arr,n);

    for(int c : arr){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}