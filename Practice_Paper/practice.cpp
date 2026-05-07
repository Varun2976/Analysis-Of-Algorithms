#include <bits/stdc++.h>
using namespace std;

void Selection(vector<int> &arr,int n){
    int maxim = *max_element(arr.begin(),arr.end());

    vector<int>count(maxim+1,0);
    vector<int>output(n);

    for(int i = 0 ; i < n ; i++){
        count[arr[i]]++;
    }
    for(int i=1;i < n;i++){
        count[i] += count[i-1];
    }
    for(int i = maxim ; i > 0 ;i--){
        count[i] = count[i-1];
    }
    count[0] = 0;

    for(int i = 0 ; i < n;i++){
        output[count[arr[i]]] = arr[i];
        count[arr[i]]++;
    }
}
int main(){
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    }

    Insertion_Sort(arr,n);

    for(int c : arr){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}