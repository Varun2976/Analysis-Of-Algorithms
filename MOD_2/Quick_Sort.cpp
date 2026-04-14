#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr , int l , int r){
    int i = l;
    int j = r;
    int x = arr[l];

    while(i < j){

        while(i <=r && arr[i] <= x ){
            i++;
        }
        while(j >= l && arr[j] > x){
            j--;
        }

        if(i < j){
            swap(arr[i] , arr[j]);
        }
        
    }
    swap(arr[l] , arr[j]);
    return j;
}
void Quick_Sort(vector<int> &arr , int l , int r){
    int pt;
    if(l < r){
        pt=partition(arr,l,r);

        Quick_Sort(arr,l,pt-1);
        Quick_Sort(arr,pt+1,r);
    }
}
int main(){
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    }

    Quick_Sort(arr,0,n-1);

    for(int c : arr){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}