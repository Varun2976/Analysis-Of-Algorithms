#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r)
{
    vector<int> store;
    int i = l;
    int j = mid + 1;

    while(i <= mid && j <= r){
        if(arr[i] <= arr[j])
        {
            store.push_back(arr[i]);
            i++;
        }
        else
        {
            store.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        store.push_back(arr[i]);
        i++;
    }

    while(j <= r){
        store.push_back(arr[j]);
        j++;
    }

    for(int k = l; k <= r; k++){
        arr[k] = store[k - l];
    }
}

void Merge_Sort(vector<int> &arr, int l, int r)
{
    if(l >= r){
        return;
    }

    int mid = (l + r) / 2;

    Merge_Sort(arr, l, mid);
    Merge_Sort(arr, mid + 1, r);

    merge(arr, l, mid, r);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    Merge_Sort(arr, 0, n-1);

    for(int x : arr)
        cout << x << " ";
}