#include <bits/stdc++.h>

int partition(vector<int>& arr,int l,int r){
    int i = l;
    int j = r;
    int x = arr[l];

    while(i < j){
        while(i <= r && arr[i] < x){
            i++;
        }
        while(j >= l && arr[j] > x){
            j--;
        }
        if(i < j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[l],arr[j]);
    return j;
}
int main(){


    return 0;
}