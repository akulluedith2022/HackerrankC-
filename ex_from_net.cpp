#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    int arr1[] = {num1, num2, num3};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    sort(arr1, arr1+n);
    cout << "\n List of Array after sorting is: ";
    for (int i = 0; i < n; ++i)
    cout << arr1[i] << " ";
    return 0;
}