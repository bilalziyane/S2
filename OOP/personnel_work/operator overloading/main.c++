#include <iostream>
#include "ep.h"
using namespace std;
number3::number3(int a)
{
    n=a;
}
number3 number3::operator+(const number3& num)
{
    //cout << "this->n =" <<this->n ;
    //cout << "\nnum.n=" << num.n;
    return number3(this->n+num.n);
}
bool number3::operator==(const number3& n)
{
    if(this->n==n.n)
       return 1;
    return 0;
}
int main()
{
    number3 one(15);
    number3 two(0);
    number3 c=one +two;
    cout << "\nc.n= " << c.n <<'\n';
    if(one==(one+two))
      printf("equal");
    else printf("not equal");
    return 0;
}