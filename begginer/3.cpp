//Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра,  
//переводит её в верхний регистр и результат выводит в консоль

#include <iostream>

int main()
{
    char a;
    std::cout<<"Enter char:";
    std::cin>>a;
    std::cout<<char(int(a)-'a'+'A');
}