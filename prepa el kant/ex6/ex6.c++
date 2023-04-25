#include <cstdio>
#include "ex6.h"
Charset1::Charset1()
{
    for (int i=0;i <256;i++)
    {
        t[i]=false;
    }
}
void Charset1::ajout(char c)
{
    if(!t[c]){
        t[c]=true;
    }
}
int Charset1::carddinal()const
{
    int count =0;
    for (int i=0;i<256;i++)
    if(t[i]){
        count ++;
    }
    return count ;
}
bool Charset1::appartient(char c)const
{
    return t[c];
}
void Charset1::init()
{
    index=0;
    while (!t[index] && index < 256) {
            index++;
        }
}
bool Charset1::existe() {
        return index < 256;
    }
char Charset1::next() {
        char c = index;
        index++;
        while (!t[index] && index < 256) {
            index++;
        }
        return c;
    }

int nombre(const char *ch)
{
    Charset1 s;
    for (;*ch;ch++){
        s.ajout(*ch);
    }
    s.init();
    while (s.existe()) {
        printf("%c ", s.next());
    }
    return s.carddinal();
}
int main ()
{
    char ta[256];
    printf("donner votre chaine de caractere: ");
    gets(ta);
    printf("\n%d",nombre(ta));

    

    printf("\n");

}