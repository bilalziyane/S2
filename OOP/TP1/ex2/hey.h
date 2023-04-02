#ifndef POINT_H
#define POINT_H


class Point
{
    //fiend void affiche(const Point &p); //peut acceder a tout dans la classe
    
    public:
        Point(float , float);
        ~Point();
        void deplace(float,float);
        float getX()const;
        float getY()const;
        float rho()const;
        float theta()const;
        void homothetie(float ,float );
        void rotation (float);
        void affiche()const;
        static int point_cout();
        
    protected:

    private:
        float m_x;
        float m_y;
        static int point_cnt;// point_cnt est un variable globale thus il peut etere acceder par tout les objet de la classe on dit que variable global car elle a meme duree de vie
};
/*had variable static is like variable global talking about duree de vie ms le droit d'acces sont restrinct pour le code dans la place ou il etait declarer(strpbrk)*/
/*les fonctions statitque est une mehode qui peut etre appele sans besoin de presence de class et par suite elle ne peut accede qu de donnees menbre  statique et ne peut appele que des mathode statique comme elle*/
/*aussi le mot cle "this" n'a aucun sens dans le code d'une methode statique */
/*une methode constante ne appele que d'autre methode constante de la meme classe methode contante <-> *****()const*/
#endif
