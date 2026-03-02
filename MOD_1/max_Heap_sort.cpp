#include <bits/stdc++.h>
using namespace std;

void adjust(vector<int>& a, int i, int n) {
    int j = 2 * i;
    int item = a[i];

    while (j <= n) {
        if (j < n && a[j] < a[j + 1])
            j = j + 1;

        if (item >= a[j])
            break;

        a[j / 2] = a[j];
        j = 2 * j;
    }

    a[j / 2] = item;
}

void heapSort(vector<int>& a, int n) {
    for (int i = n / 2; i >= 1; i--)
        adjust(a, i, n);

    for (int i = n; i >= 2; i--) {
        swap(a[1], a[i]);
        adjust(a, 1, i - 1);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    heapSort(a, n);

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";

    return 0;
}