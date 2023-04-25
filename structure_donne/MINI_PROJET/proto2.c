#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>
typedef struct new
{
    char nom[50];
    char tel[20];
    int numero;
} client;

typedef struct Livre
{
    int ISBN;
    char Titre[50];
    int Stock;
    struct Livre *suivant;
} LIVRE;

typedef struct
{
    LIVRE *premier;
} LSC;
typedef struct gkd
{
    int ISBN;
    int num;
    int qte;
    char nom[40];
    char tel[20];
    struct gkd *suivant;
}vendu;

typedef struct 
{
   vendu *premier;
}liste_vent;

void vente2(int numc, int numl, int qte,vendu *vent)
 {
    vent = malloc(sizeof(vendu));
    vent->num = numc;
    vent->ISBN = numl;
    vent->qte = qte;
    vent->suivant = NULL; // Add this line to initialize the suivant member
}
void initialiser_liste(liste_vent *new){
    new->premier=NULL;
}
void afficher_vent(vendu *vent)
{
    printf("ISBN: %d\nTitre: %s\nqte: %d\n nom cient:%s\n num de telephone:\n", vent->ISBN, vent->num, vent->qte,vent->nom);
}
void afficherliste_vent(liste_vent *list)
{
    for (vendu *vent = list->premier; vent != NULL; vent = vent->suivant)
    {
        afficher_vent(vent);
    }
}
void Ajouter_vent(liste_vent *liste, vendu *newvent) {
    if (liste->premier == NULL) {
        liste->premier = newvent;
    } 
    else {
        vendu *courant = liste->premier;
        while (courant->suivant != NULL) {
            courant = courant->suivant;
        }
        courant->suivant = newvent;
        newvent->suivant = NULL; 
    }
}

void initialise(LSC *liste)
{
    liste->premier = NULL;
}

void remplir(LIVRE *newLivre, int ISBN, char *Titre, int Stock)
{
    newLivre->ISBN = ISBN;
    strcpy(newLivre->Titre, Titre);
    newLivre->Stock = Stock;
    newLivre->suivant = NULL;
}

void afficher(LIVRE *livre)
{
    printf("ISBN: %d\nTitre: %s\nStock: %d\n", livre->ISBN, livre->Titre, livre->Stock);
}

void afficherListe(LSC *liste)
{
    for (LIVRE *livre = liste->premier; livre != NULL; livre = livre->suivant)
    {
        afficher(livre);
    }
}

LIVRE *chercher(LSC *liste, int ISBN)
{
    LIVRE *livre = liste->premier;
    while (livre != NULL)
    {
        if (livre->ISBN == ISBN)
        {
            return livre;
        }
        livre = livre->suivant;
    }
    return NULL;
}

int position(LSC *Liste, int ISBN)
{
    int position = 0;
    LIVRE *Courant = Liste->premier;
    while (Courant != NULL)
    {
        if (Courant->ISBN == ISBN)
            return position;
        else
            position++;
        Courant = Courant->suivant;
    }
    return 0;
}

int quantite(LSC *liste, int ISBN)
{
    LIVRE *livre = chercher(liste, ISBN);
    if (livre != NULL)
    {
        return livre->Stock;
    }
    return -1;
}
void AjouterLivre(LSC *liste, LIVRE *newLivre)
{
    LIVRE *livreExist = chercher(liste, newLivre->ISBN);
    if (livreExist != NULL)
    {
        (newLivre->Stock)++;
    }
    else
    {
        if (newLivre->Stock <= 1) 
        {
            newLivre->suivant = liste->premier;
            liste->premier = newLivre;
        }
        else if (liste->premier == NULL)
        {
            liste->premier = newLivre;
        }
        else
        {
            LIVRE *courant = liste->premier;
            while (courant->suivant != NULL)
            {
                courant = courant->suivant;
            }
            courant->suivant = newLivre;
        }
    }
}

void Vendre(LSC *LISTE, int ISBN, char *nomclient, client *Acht)
{
    LIVRE *livre = chercher(LISTE, ISBN);
    if (livre != NULL && livre->Stock > 0)
    {
        livre->Stock--;
        strcpy(Acht->nom, nomclient);
        Acht->numero = ISBN ;
        printf("Le livre a ete vendu!\n");
    }
    else
        printf("Le livre est untrouvable ou en rupture de stock!\n");
}



void SupprimerSiVide(LSC *liste, LIVRE *livre) {
    if (livre != NULL && livre->Stock == 0)
    {
        if (livre == liste->premier) {
            liste->premier = livre->suivant;
        }
        else {
            LIVRE *precedent = liste->premier;
            while (precedent != NULL && precedent->suivant != livre)
                precedent = precedent->suivant;
            if (precedent != NULL)
                precedent->suivant = livre->suivant;
        }
        free(livre);
    }
}

void SupprimerToutVide(LSC *liste)
{
    LIVRE *Courant = liste->premier;
    LIVRE *precedent = NULL;
    while (Courant != NULL)
    {
        if (Courant->Stock == 0)
        {
            if (precedent == NULL)
            {
                liste->premier = Courant->suivant;
                free(Courant);
                Courant = liste->premier;
            }
            else
            {
                precedent->suivant = Courant->suivant;
                free(Courant);
                Courant = precedent->suivant;
            }
            printf("Le livre a ete supprime!\n");
        }
        else
        {
            precedent = Courant;
            Courant = Courant->suivant;
        }
    }
}

int main()
{
    LSC *liste = malloc(sizeof(LSC));
    initialise(liste);

    LIVRE *livre1 = malloc(sizeof(LIVRE));
    remplir(livre1, 123456789, "think and grow rich", 10);
    AjouterLivre(liste, livre1);

    LIVRE *livre2 = malloc(sizeof(LIVRE));
    remplir(livre2, 987654321, "you can't hurt me", 5);
    AjouterLivre(liste, livre2);

    LIVRE *livre3 = malloc(sizeof(LIVRE));
    remplir(livre3, 567891234, "mindset", 0);
    AjouterLivre(liste, livre3);

    printf("La liste des livres :\n");
    afficherListe(liste);

    client *client1 = malloc(sizeof(client));

    Vendre(liste, 123456789, "Ahmed", client1);
    printf("l'acheteur du livre vendu est \"%s\"",client1->nom);

    printf("\nLa liste apres la vente : \n");
    afficherListe(liste);

    SupprimerToutVide(liste);
    printf("\nLes livres qui ont pas stocke sont supprimes.\n");

    printf("\nLa liste apres la suppression:\n");
    afficherListe(liste);
    liste_vent *list_vnt=malloc(sizeof(liste_vent));
    initialiser_liste(list_vnt);
    vendu *vt=malloc(sizeof(vendu));
    vendu *vt1=malloc(sizeof(vendu));
    vente2(1, 123456789,1,vt);
    vente2(2,567891234,2,vt1);
    printf("\n\n");
    Ajouter_vent(list_vnt,vt);
    Ajouter_vent(list_vnt,vt1);
    
    afficherliste_vent(list_vnt);

    free(liste);

    return 0;
}
