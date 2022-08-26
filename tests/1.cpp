#include <iostream>
#include <vector>

struct elem{
    int val;
    int level;
};

int main()
{
    std::vector<elem> A;
    elem x;
    x.level=1;
    x.val=2;
    A.push_back(x);
    std::cout<<"print: "<<A[0].le
}