//Организовать ввод натурального числа с клавиатуры. 
//Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.
#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
    int n;
    std::vector<int> A;
    std::cout<<"Enter n:"<<std::endl<<"n=";
    std::cin>>n;

    while(n!=0)
    {
        A.push_back(n%10);
        n=n/10;
    }
    
    std::sort(A.begin(),A.end());
    std::cout<<"max="<<A[A.size()-1]<<std::endl<<"min="<<A[0];
}