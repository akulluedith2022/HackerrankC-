#include <iostream>
using namespace std;

// class vector{
//     int sz;
//     double* elem;

//     public:
//     int size(){ return vector.size();}

// };

void sizes(int x, int* p){
    cout << sizeof(x) << endl;
    cout << sizeof(p) << endl;


}

int main(){
    int a = 8;
    int* p = &a;
    sizes(a,p);

    double* p2 = new double{2.3};
    cout << *p2;
    cout << p2;

    return 0;
}