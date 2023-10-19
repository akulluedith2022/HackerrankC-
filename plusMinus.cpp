#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int negativeCounter = 0;
int positiveCounter = 0;
int zeroCounter = 0;

int main(){
    vector<int> arr = {3,7,5,-1,1,-8,0,0};
    int arr_size = arr.size();
    float plus_amount = (positiveCounter / arr_size);
    float minus_amount = (negativeCounter / arr_size);
    float zero_amount = (zeroCounter / arr_size);
    for(int i = 0; i < arr_size; i++){
        if(arr[i] < 0){
            negativeCounter++;
        }
        else if(arr[i] > 0){
            positiveCounter++;
        }
        else{
            zeroCounter++;
        }
    }

    cout << positiveCounter << endl << negativeCounter << endl << zeroCounter << endl << "****";

    cout << plus_amount<< endl;
    cout << fixed << setprecision(6) << minus_amount << endl;
    cout << fixed << setprecision(6) << zero_amount << endl;
    return 0;
}