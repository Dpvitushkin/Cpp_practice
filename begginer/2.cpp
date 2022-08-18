//Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b) 
//Числа а, b, f вводятся с клавиатуры. Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.
#include <iostream>

int main()
{
    float a,b,f;
    std::cout<<"Enter numbers a,b,f:"<<std::endl<<"a=";
    std::cin>>a;
    std::cout<<"b=";
    std::cin>>b;
    std::cout<<"f=";
    std::cin>>f;
    std::cout<<(a+b-f/a)+f*a*a-(a+b)<<std::endl;
}