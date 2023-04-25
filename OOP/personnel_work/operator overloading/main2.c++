#include <iostream>
#include "ap.h"
using namespace std;
counter::counter(int a) : count(a) {}
void counter::print()
{
    cout << count << '\n';
}
void counter::increment()
{
    count++;
}
/*counter counter::operator+(const counter& n)
{
    return(count + n.count);
}*/
void set_to_zero(counter& num)
{
    num.count =0;
}
counter operator+(counter &first,counter &sec)
{
    int nw_count=first.count + sec.count ;
    return counter(nw_count);
}
counter operator*(counter &num1,counter &num2)
{
    int nw_count=num1.count * num2.count;
    return counter(nw_count);
}
counter counter::operator&(int n)
{
    int a;
    a=count*n;
    return counter(a);
}
int main() 
{
    counter cnt1(9);
    cnt1.increment();
    cnt1.print();

    counter cnt2(3);
    cnt2.print();
 
    counter cnt3 = cnt1+ cnt2;
    cnt3.print();
    set_to_zero(cnt3);
    cnt3.print();

    counter cnt4=cnt1*cnt2;
    cnt4.print();

    counter cnt5=cnt1&20;
    cnt5.print();
    return 0;
}