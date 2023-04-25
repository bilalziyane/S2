#include <iostream>
using namespace std;
class basicnumber
{
    public :
    int n;
    basicnumber(int set_n)
    {
        n=set_n;
    }
    basicnumber(const basicnumber& basic_num)
    {
          n=basic_num.n;
          cout << "copy constructor called !\n";
    }
};

int main ()
{
    basicnumber num1(7);
    cout << "num1: " << num1.n << endl ;
    basicnumber num2=num1;
    cout << "num2: " << num2.n << '\n';
    basicnumber num3(5);
    basicnumber num4(10);
    num3= num4 ;
}