//Найти S, если S = M1 + M2 + … + Mn,   M = X^3 - Y + Z^2. 
//Количество X вводятся пользователем программы. 
//Для каждого X значения Z, B, А, ? разные (вводятся пользователем программы).

#include <iostream>
#include <vector>
#include <cmath>


int main()
{
    float x,y,z;
    int n;
    std::vector<float> Nums;
    std::vector<std::vector<float>> A;
    std::cout<<"Enter n:";
    std::cin>>n;

    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter x,y,z:"<<std::endl;;
        std::cout<<"  x"<<i<<"=";
        std::cin>>x;
        std::cout<<"  y"<<i<<"=";
        std::cin>>y;
        std::cout<<"  z"<<i<<"=";
        std::cin>>z;
        Nums.push_back(x);
        Nums.push_back(y);
        Nums.push_back(z);
        A.push_back(Nums);
        for(int j=0;j<3;j++) {Nums.pop_back();}
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            std::cout<<A[i][j];
        }
        std::cout<<std::endl;
    }

    float result=0;
    for (int i=0;i<n;i++)
    {
        result+=pow(A[i][0],3) - A[i][1] + pow(A[i][2],2);

    }
    std::cout<<"result="<<result;
    
}