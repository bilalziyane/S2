#include <cstdio>
#include "hh.h"
Charset2::Charset2()
{
    for (int i=0;i<256;i++)
    {
        t[i]=false;
    }
}
bool Charset2::appartient(const char c)const
{
    return t[c];
}
void Charset2::ajout(char c)
{
    if(!t[c])
        t[c]=true;
    
}
int Charset2::cardinal()const
{
    int cnt=0;
    for(int i=0;i<256;i++)
      if(t[i])
        cnt ++;
    
    return cnt;
}
int nombre(const char *ch)
{
    Charset2 s;
    for (;*ch;ch++){
        s.ajout(*ch);
    }
    return s.cardinal();
}
int main()
{
    char ch[256];
    printf("donner votre chaine de caractere :");
    gets(ch);
    printf("%d",nombre(ch));
    return 0;
}