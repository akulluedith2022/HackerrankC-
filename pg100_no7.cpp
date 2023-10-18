#include <iostream>
#include <string>

int main(){
    string w1, w2, w3;
    cin >> w1;
    cin >> w2;
    cin >> w3;
    string nameArray[] = {w1, w2, w3};
    int n = sizeof(nameArray)/sizeof(arr1[0]);
    sort(nameArray, nameArray+n);
    cout << "\n List of Array after sorting is: ";
    for (int i = 0; i < n; ++i)
    cout << nameArray[i] << " ";
    return 0;
}