#ifndef mat_h
#define mat_h
class vect;
class Mat
{
    friend const vect prod(const Mat &,const vect &); //lorsque on a retouurne un objet par valeur toujours const
    private:
     double m[3][3];
    public:
    Mat(double [3][3]);
};
#endif