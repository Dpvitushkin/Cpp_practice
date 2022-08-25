#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>

int main()
{
    std::list<int> A={9,9,9,9,9,9,9};
    std::list<int> B={9,9,9,9};
    if(A.size()!=B.size())
    {
        int razn=(A.size()>B.size()) ? (A.size()-B.size()) : (B.size()-A.size());
        if(A.size()>B.size()) { for(int i=0;i<razn;i++) B.push_front(0);}
        else { for(int i=0;i<razn;i++) A.push_front(0);}
    }
    std::list<int> result;
    std::list<int>::reverse_iterator itA,itB;
    itA=A.rbegin();
    itB=B.rbegin();
    int add=0,number;
    while(itA!=A.rend())
    {
        number=*itA+*itB+add;
        if(number>9){add=1;number%=10;}
        else add=0;
        result.push_front(number);
        itA++;itB++;
    }
    if (add==1) result.push_front(1);
    for(auto it=result.rbegin();it!=result.rend();it++)
    {
        std::cout<<*it<<"  ";
    }
}