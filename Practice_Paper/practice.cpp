#include <bits/stdc++.h>
using namespace std;

void Partition(vector<int>&arr , int low , int high , unordered_map<int,int>freq){
    int pivot = arr[low]
}
void Iterative_Quick_Sort(){
    sort(items.begin(),items.end(),cmp);
    double total = 0.0;

    for(auto item : items){
        if(W >= item.weight){
            W -= item.weight;
            total += item.value;
        }
        else{
            total += item.value * (double(W)/item.weight);
            break;
        }
    }
    cout << total << endl;

}
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    unordered_map<int,int> freq;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    Iterative_Quick_Sort(arr, freq);

    for (int c : arr) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}