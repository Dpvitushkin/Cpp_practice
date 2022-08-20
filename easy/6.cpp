//Напишите программу, которая позволяет пользователю ввести в консоль три координаты вектора x, y, и z, с основанием у начала координат.

#include <iostream>
#include <cmath>


float calculate_length(int x,int y,int z)
{
    int summ=pow(x,2)+pow(y,2)+pow(z,2);
    return pow(summ,0.5);
}

int main()
{
    int x,y,z;
    std::cout<<"Enter x,y,z:"<<std::endl<<"x=";
    std::cin>>x;
    std::cout<<"y=";
    std::cin>>y;
    std::cout<<"z=";
    std::cin>>z;

    std::cout<<"length="<<calculate_length(x,y,z)<<std::endl;
}