#include <iostream>
using namespace std;
class student 
{
    public:
    int age;
    char c;
    student(int age,char c)
    {
        printf("%p  ", this );
        this->age=age;
        this->c=c;
    }
    void increase_age()
    {
        (this->age)++;
        printf("\n%d",this->age );
    }
/*void graduate()
{
    printf("congratulation \n");
    create_report(this);
}*/
student& set_name(char c)
{
    this->c =c;
    return *this;
}
student& set_age(char age)
{
    this->age =age;
    return *this;
}
};
void create_report(student *student)
{
    printf("%c", student->c);
    printf("\n%d",student->age);
}
int main()
{
     student amine(20,'a');
     printf("%p",&amine);
     amine.increase_age();
     amine.set_name('b').set_age(23);
     amine.increase_age();
}