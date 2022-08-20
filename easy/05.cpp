//Возвести, введенное с клавиатуры число, в степень n, степень тоже вводится с клавиатуры. 
//Возведение в степень организовать с использованием циклов.
#include <iostream>

int main()
{
    int n,p;
    std::cout<<"Enter number and power:"<<std::endl<<"n=";
    std::cin>>n;
    std::cout<<"p=";
    std::cin>>p;
    int result=n;
    switch (p)
    {
        case 0:
            std::cout<<n<<"^"<<p<<"=1";
            break;
        case 1:
            std::cout<<n<<"^"<<p<<"="<<n;
            break;
        default:
            for(int i=1;i<p;i++){result*=n;}
            std::cout<<n<<"^"<<p<<"="<<result<<std::endl;
    }
}