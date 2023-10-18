#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //EXERCISE No. 2
    // const double NUMBER_OF_KILOMETERS_PER_MILE = 1.609;
    // double miles;
    // cout << "Welcome to the mile to km convertor!\n\n";
    // cout << "Please enter the number of miles to convert:\n";
    // cin >> miles;
    // cout << miles << " miles is equal to "<< miles * NUMBER_OF_KILOMETERS_PER_MILE << "km.\n";

//EXERCISE No. 3
// int double = 0;
// char name = 'C';

//EXERCISE No. 4
// double val1, val2;

// cout << "please enter any two values\n";
// cout << "value 1: \n";
// cin >> val1;
// cout << "value 2: \n";
// cin >> val2;

// if(val1 < val2){
//     cout << val1 << " is smaller than "<< val2 << "\n";
// }
// else if(val1 > val2){
//     cout << val2 << " is smaller than "<< val1 << "\n"; 
// }
// else{
//     cout << val1 << " is equal to " << val2 << "\n";
// }

// cout << "\n The sum of the values is: " << val1 + val2;
// cout << "\n The difference between the values is: " << val1 - val2;
// cout << "\n The product of the values is: " << val1 * val2;
// cout << "\n The ratio of the value1 to value2 is: " << val1 / val2;

//EXERCISE No. 5 (number sorting _ in ascending order)
int num1, num2, num3;
int num_array[] = {num1, num2, num3};
int n = sizeof(num_array)/sizeof(num_array[0]);
qsort(num_array, num_array + n);
cout << num_array;
}