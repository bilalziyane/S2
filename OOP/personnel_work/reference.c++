#include <iostream>
using namespace std;
void increment(int &x){
    x++;
    cout << "the value of x is " << x << endl;
}
int main()
{   int *p;
    int a =4;
    p=&a;
    cout << *p << endl;
    cout << "before increment " << a <<endl;
    increment(a);
    cout << "after increment " << a << endl;
}