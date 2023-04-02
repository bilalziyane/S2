#include "new.h"
#include <cstdio>
#include <cstring>
Charset::Charset(){
    for (int i=0;i<256;i++){
        t[i]=false;
    }
}
void Charset::ajout(char c)
{
    if(!t[c]){
        t[c]=true;
    }
}
int Charset::cardinal()const
{
    int count =0;
    for (int i=0;i<256;i++)
    {
        if(t[i])
           count ++;
    }
        return count;
}

bool Charset::contains(char c)const{
    return t[c];
}
int nombre(const char *ch){
    Charset s;
    for (;*ch;ch++){
        s.ajout(*ch);
    }
    return s.cardinal();
}
//****** main fonction ***********
int main() {
    char ta[256];
    printf("donner votre chaine de caaractere.");
    gets(ta);
    printf("%d ",nombre(ta));
    return 0;
}