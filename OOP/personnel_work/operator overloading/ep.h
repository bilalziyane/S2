#ifndef number3_h
#define number3_h
class number3
{
    public:
    int n;
    number3(int );
    number3 operator+(const number3&);
    bool operator==(const number3&);
};
#endif