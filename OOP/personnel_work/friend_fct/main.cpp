#include <cstdio>

class myclass
{
    friend void double_x(myclass &object);
    private:
    int x;
    void add(int n){
        x += n;
    }
    public :
    myclass(int a){
        x=a;
    }
    void print(){
        printf("%d\n",x);
    }
};
void double_x( myclass &object)
{
    int current_x_value =object.x;
    object.add(current_x_value);
    //object.x *=2;

}

int  main()
{
    myclass myobject(7);
    myobject.print();
    double_x(myobject);
    myobject.print();
    return 0;
}