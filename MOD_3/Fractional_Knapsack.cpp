#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value , weight;
}
bool cmp(Item a , Item b){
    double r1 = double(a.value)/weight;
    double r2 = double(b.value)/weight;
    return r1 > r2;
}

double fractionalKnapsack(int W , vector<int>& arr){
    sort(arr.begin(),arr.end(),cmp);
    double total = 0.0
    for(auto item : items){
        if(W >= item.weight){
            W -= item.weight;
            total += item.value();
        }
        else{
            total += item.value(double(W)/item.weight);
            break;
        }
    }
    return total;
}
int main(){
    vector<Item> items = {{60,10}, {100,20}, {120,30}};
    int W = 50;

    cout << fractionalKnapsack(W, items);
    return 0;
}