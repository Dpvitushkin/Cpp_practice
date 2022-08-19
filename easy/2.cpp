//Найти алгебраическую сумму для выражения: 1k + 2k + 3k + … + Nk. N и степень k вводит пользователь.
#include <iostream>
#include <cmath>

int main()
{
    int n,k;
    std::cout<<"Enter n and k:"<<std::endl<<"n=";
    std::cin>>n;
    std::cout<<"k=";
    std::cin>>k;

    int result=0;
    for(int i=1;i<=n;i++) {result+=pow(i,k);}
    std::cout<<result<<std::endl;
}