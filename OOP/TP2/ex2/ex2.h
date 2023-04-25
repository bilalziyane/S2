#ifndef vect_H
#define vect_H
#include <iostream>
class vect3d
{
    friend void operator << (std::ostream &,const vect3d &);//madernach const m3a ostream hit lorsqu'on ecrit a l'ecarn on modifie l'ecran et ostream represent l'ecran 
    friend bool operator != (const vect3d & ,const vect3d &);
    private:
    float mx, my , mz;
    public:
    vect3d(float=0,float=0,float=0);
    void affiche()const;//kandiroha haka hit dak parametre d affiche est implicite
    bool operator == (const vect3d&)const;
    vect3d& operator = (const vect3d &);
};
#endif