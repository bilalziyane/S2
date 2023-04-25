#ifndef counter_h
#define counter_h
class counter
{
    friend void set_to_zero(counter&);
    friend counter operator*(counter&,counter&);
    friend counter operator+(counter&,counter&);
    int count ;
    public: 
    counter(int );
    void print();
    void increment();
    counter operator&(int n);
   // counter operator+(const counter&);
};
#endif
