//Суть задачи: по введенному номеру дня недели вывести его название, используя оператор множественного выбора.
#include <iostream>
#include <vector>
#include <string>
#include <list>

int main()
{
    int n;
    std::string A[7]={"pn","vt","sr","ch","pt","sb","vs"};
    std::cout<<"Enter n:"<<std::endl<<"n=";
    std::cin>>n;

    switch(n)
    {
        case 1:
            std::cout<<A[0]<<std::endl;
            break;
        case 2:
            std::cout<<A[1]<<std::endl;
            break;
        case 3:
            std::cout<<A[2]<<std::endl;
            break;
        case 4:
            std::cout<<A[3]<<std::endl;
            break;
        case 5:
            std::cout<<A[4]<<std::endl;
            break;
        case 6:
            std::cout<<A[5]<<std::endl;
            break;
        case 7:
            std::cout<<A[6]<<std::endl;
            break;
    }
}