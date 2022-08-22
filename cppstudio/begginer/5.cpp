//рисуем равнобедренный треугольник
#include <iostream>
#include <vector>
void print_line(int x,int num)
{
    for (int i=0;i<num-x;i++){std::cout<<" ";}
    for (int i=0;i<2*x-1;i++){std::cout<<"*";}
    std::cout<<std::endl;
    
}
int main()
{
    int num;
    std::cout<<"Enter number of strings:";
    std::cin>>num;
    for (int i=1;i<=num;i++) print_line(i,num);
 
}