//Программа должна переводить число, введенное с клавиатуры в метрах, в километры.
#include <iostream>

int main()
{
    float x;
    std::cout<<"Enter meters:";
    std::cin>>x;
    std::cout<<x/1000;
}