#ifndef POINT_H
#define POINT_H


/// @brief 
class Point
{
    //iend void affiche(const Point &p); //peut acceder a tout dans la classe

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

    protected:

    private:
        float m_x;
        float m_y;
        static int point_cnt;// point_cnt est un variable globale thus il peut etere acceder par tout les objet de la classe on dit que variable global car elle a meme duree de vie
};
#endif
