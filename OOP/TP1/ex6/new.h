#ifndef charset_H
#define charset_H

class Charset
{
    public:
       Charset();
       void ajout(char c);
       int cardinal()const;
       bool contains(char c)const;
    private:
    bool t[256];
};

int nombre(const char *ch);
#endif
