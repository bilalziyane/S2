#ifndef Charset1_h
#define Charset1_h
class Charset1
{
    private:
    bool t[256];
    int index;
    public:
    Charset1();
    void ajout(char);
    int carddinal()const;
    bool appartient( char)const;
    void init();
    bool existe();
    char next();
};
int nombre (const char *);
#endif
