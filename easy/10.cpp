//Вычислить значение выражения по формуле:(1-tg x)^(ctg x)+ cos(x-y).

#include <iostream>
#include <cmath>
float ctg(float x)
{
    return 1/tan(x);
}
int main()
{
    float x,y;
    std::cout<<"Enter x,y"<<std::endl<<"x=";
    std::cin>>x;
    std::cout<<"y=";
    std::cin>>y;

    float result=pow((1-tan(x)),ctg(x)) + cos(x-y);
    std::cout<<"res="<<result<<std::endl;
}