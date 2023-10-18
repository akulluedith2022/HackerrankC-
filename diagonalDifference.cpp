#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int LRDiagonal_Sum = 0;
    int RLDiagonal_Sum = 0;
    int diagonal_difference;
    vector<vector<int>> arr  = {{1,2,3}, {4,6,1},{3,2,3}};
    
    cout << "vector size is " << vector_size << "\n";
    
    for(int i = 0; i < arr.size();i++){
        //Calculates the left-right diagonal sum of the matrix
        LRDiagonal_Sum += arr[i][i];
        cout << LRDiagonal_Sum << endl;
        
        //Calculates the right-left diagonal sum of the matrix
        RLDiagonal_Sum += arr[i][vector_size];   
        cout << RLDiagonal_Sum << endl; 

        vector_size--;
    }
    
    diagonal_difference = abs(LRDiagonal_Sum - RLDiagonal_Sum);  
    cout << diagonal_difference;

    return 0;
}