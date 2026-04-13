#include <bits/stdc++.h>

struct job{
    int id , deadline , profit;
};

void Job_Sequencing(vector<int>&arr , int n){
    
}
int main(){

    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    }

    Job_Sequencing(arr,n);

    for(int c : arr){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}