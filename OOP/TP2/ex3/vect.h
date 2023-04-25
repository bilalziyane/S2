#ifndef vect_H
#define vect_H

#include <iostream>
class Mat;
typedef double t3[3];
class vect
{
    friend const vect prod(const Mat &, const vect &);
    friend std::ostream &operator << (std::ostream &,const vect&);
private:
  double mv[3];
public:
     vect(t3);
     vect(double,double,double);
};

#endif


