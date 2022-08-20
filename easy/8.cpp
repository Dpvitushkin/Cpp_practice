//Вычислить, не используя функцию pow, значения функции z(x,m) = xm sinm(xm), для значений аргументов:
//x от -1.1 до 0.3 с шагом 0.2;
//m от 1 до 5 с шагом 1.

#include <iostream>
#include <cmath>

#define X_max 0.3
#define M_max 5

float z(float x,int m)
{
    float result=1;
    float sin_=sin(x*m);
    for(int i=1;i<=m;i++){result*=sin_*x;}
    return result;
}


int main()
{
    float x=-1.1,h_x=0.2;
    int m=1,h_m=1;

    while(x<=X_max)
    {
        m=1;
        std::cout<<"At x="<<x<<std::endl;
        while(m<=M_max)
        {
            std::cout<<"     m="<<m<<std::endl;
            std::cout<<"       z("<<x<<","<<m<<")="<<z(x,m)<<std::endl;
            m+=h_m;
        }
        x+=h_x;
    }
}