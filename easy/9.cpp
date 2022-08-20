//Дан одномерный массив, длину массива задаёт пользователь. 
//Вычислить сумму квадратов тех чисел, модуль которых превышает значение 2,5.
#include <iostream>
#include <vector>
#include <cmath>


float my_abs(float x)
{
    if (x>=0) return x;
    else return -x;
}
int main()
{
    int n;
    std::vector<float> X;
    std::cout<<"Enter n:"<<std::endl<<"n=";
    std::cin>>n;

    float tmp;
    for(int i=0;i<n;i++)
    {
        std::cout<<"A["<<i<<"]=";
        std::cin>>tmp;
        X.push_back(tmp);
    }

    float result=0;
    for(int i=0;i<n;i++) if (my_abs(X[i])>2.5) result+=pow(X[i],2);
    std::cout<<"Summ="<<result<<std::endl;
}