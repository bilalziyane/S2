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
class cost;

class revenue
{
    int revenu;
    public :
    // revenue(int rev) : revenu(rev) {}
    revenue(int rev)
    {
        revenu=rev;
    }
    bool profit(cost &);
};
class cost
{
    friend bool revenue::profit(cost &);
    int coste;
    public:
    cost(int cos) : coste(cos) {}
};
bool revenue::profit(cost &cos){
    if (revenu > cos.coste) return 1;
    else 
        return 0;

}

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
    revenue revenue1(7000);
    cost cost1(5000);
    if(revenue1.profit(cost1))
        printf("hey");
    else printf("no hey");
    
    return 0;
}