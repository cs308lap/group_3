#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    int x,y;
    x = 56;
    y = 98;
    cout << hcf(x,y) << "\n";
    return 0;
}
