#include "hh.h"
#include <cstdio>
#include <cstring>

Charset::Charset()
{
    for (int i = 0; i < 256; i++)
    {
        tab[i] = false;
    }
}
void Charset::ajout(char c)
{
    if (!tab[c])
    {
        tab[c] = true;
    }
}
int Charset::cardinal() const
{
    int count = 0;
    for (int j = 0; j < 256; j++)
    {
        if (tab[j])
        {
            count++;
        }
    }
    return count;
}
bool Charset::appartient(char c) const
{
    return tab[c];
}
int nombre(const char *sa)
{
    Charset s;
    for (; *sa; sa++)
    {
        s.ajout(*sa);
    }
    return s.cardinal();
}
int main()
{
    char s[256];
    printf("enter your name :");
    scanf("%s", s);
    printf("%d",nombre(s));
}