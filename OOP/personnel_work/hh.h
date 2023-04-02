#ifndef charset_H
#define charset_H

class Charset
{
    public:
      Charset();
      void ajout(char c);
      int cardinal()const;
      bool appartient(char c)const; 
    private:
      bool tab[256];
};
int nombre(const char *sa);
#endif