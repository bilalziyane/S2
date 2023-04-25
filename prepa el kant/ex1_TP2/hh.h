#ifndef Charset2_h
#define Charset2_h
class Charset2
{
    public:
    Charset2();
    void ajout(const char );
    int cardinal()const;
    bool appartient(const char )const;
    private:
    bool t[256];
};
    int nombre(const char *);
#endif