//Составить алгоритм увеличения всех трех, введённых с клавиатуры, переменных на 5,
//если среди них есть хотя бы две равные. В противном случае выдать ответ «равных нет».

#include <iostream>
#include <stdio.h>
bool if_equal(int x,int y,int z)
{
    if ((x==y)||(x==z)||(y==z)) return true;
    return false;
}
int main()
{
    int x,y,z;
    std::cout<<"Enter 3 numbers:"<<std::endl<<"x=";
    std::cin>>x;
    std::cout<<"y=";
    std::cin>>y;
    std::cout<<"z=";
    std::cin>>z;
    if(if_equal(x,y,z)) std::cout<<x+5<<" "<<y+5<<" "<<z+5<<std::endl;
    else std::cout<<"No equals";

}