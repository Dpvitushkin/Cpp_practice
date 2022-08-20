//Напишите программу , в которой по извесной начальной скорости V и времени полета тела T 
//определяется угол aльфа под которым тело брошено по отношению к горизонту
#include <iostream>
#include <cmath>

int main()
{
    float V,T;
    std::cout<<"Enter V and T:"<<std::endl<<"V=";
    std::cin>>V;
    std::cout<<"T=";
    std::cin>>T;
    float result;
    result=asin(9.8*T/(2*V));
    std::cout<<result*(90/3.14);


}