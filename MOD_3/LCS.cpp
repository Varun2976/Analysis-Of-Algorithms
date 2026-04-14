#include <bits/stdc++.h>
using namespace std;
void LCS(string a , string b){
    int n = a.size();
    int m = b.size();

    vector<vector<int>>L(n+1,vector<int>(m+1,0));

    for(int i = 1 ; i <= n;i++){
        for(int j = 1 ; j <= m ;j++){
            if(a[i-1] == b[j-1]){
                L[i][j] = L[i-1][j-1] + 1;
            }
            else{
                L[i][j] = max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    cout << "LCS : " << L[n][m] << endl;
}

int main(){
    
    LCS("ABC","AC");

    return 0;
}