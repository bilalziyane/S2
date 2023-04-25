#include <iostream>
using namespace std;
class number
{
    public:
    int *n;
    number(int set_n)
    {
        n =(int * ) malloc(sizeof(int));
        *n=set_n;
    }
    number(const number& num)
    {
        n=(int *)malloc(sizeof(int));
        *n= *(num.n);
    }
    ~number()
    {
        free(n);
    }
    int get()
    {
        return *n;
    }
};
int main()
{
    number num1(8);
    cout << "num1: " << num1.get() << '\n';
    number num2 = num1;
    cout << "num2: " << num2.get() << '\n';
    *(num1.n)=20;
    cout << "num1: " << num1.get() << '\n';
    cout << "num2: " << num2.get() << '\n';
    //exit(0);
    return 0;
}