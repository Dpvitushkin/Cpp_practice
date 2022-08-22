//Составить программу, которая будет считывать введённое пятизначное число. 
//После чего, каждую цифру этого числа необходимо вывести в новой строке.


#include <iostream>
int digit(int x,int num)
{
    int result;
    for (int i=0;i<num;i++)
    {
        result=x%10;
        x=x/10;
    }
    return result;
}

int main()
{
    int x;
    std::cin>>x;
    for(int i=5;i>0;i--)
    {
        std::cout<<digit(x,i)<<std::endl;
    }
}