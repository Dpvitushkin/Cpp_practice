#include <iostream>
#include <vector>

struct elem{
    int val;
    int level;
};

int main()
{
    std::vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    std::cout<< "size= "<<a.size()<<std::endl;
    int i=0;
    while (1)
    {
        try
        {
            std::cout<<a.at(i);
        
        }
        catch(...)
        {
            std::cout<<"catched"<<std::endl;
            break;

        }
        i++;
    }
    std::cout<<"end";
    
}