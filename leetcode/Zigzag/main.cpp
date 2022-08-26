#include <string>
#include <iostream>
#include <vector>
struct elem
{
    char val;
    int level;
    int number;

};
std::vector<elem> fill_structure(std::string str,int num)
{
    std::vector<elem> A;
    elem x;
    int cur_level=1;
    char c;
    std::string order="down";
    for(int i=0;i<str.size();i++)
    {
        c=str[i];
        if(order=="down" && cur_level<=4)
        {
            x.val=c;
            x.level=cur_level;
            x.number=i;
            A.push_back(x);
            //закончил тут
            
        }


    }


}
int main()
{
    std::string str;
    int num;
    std::cout<<"enter string:"<<std::endl<<"   str= ";
    std::cin>>str;
    std::cout<<"enter number of levels:"<<std::endl<<"   num=";
    std::cin>>num;


}