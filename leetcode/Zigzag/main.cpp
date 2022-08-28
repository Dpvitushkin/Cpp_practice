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
        x.val=c;
        x.level=cur_level;
        x.number=i;
        A.push_back(x);
        if(order=="down")
        {
            if(cur_level==num)
            {
                order="up";
                cur_level--;
                continue;
            }
            else
            {
                cur_level++;
                continue;
            }   
        }
        else
        {
            if(cur_level==1)
            {
                order="down";
                cur_level++;
                continue;
            }
            else
            {
                cur_level--;
                continue;
            }  

        }

    }
    return A;


}
std::string make_str(std::vector<elem> A,int num)
{
    std::cout<<"started make_str"<<std::endl;
    std::string tmp,result,str_out="",tmp_1,tmp_2;
    int h_glob=2*num-2;
    int h_cur=0;
    for(int lev=1;lev<=num;lev++)
    {
        while(1)
        {
            try
            {
                if(lev==num || lev==1)
                {
                    tmp+=A.at(h_cur+lev-1).val;
                    h_cur+=h_glob;
                    continue;
                }
                tmp_1=A.at(h_cur+lev-1).val;
                tmp+=tmp_1;
                tmp_2=A.at(h_cur+h_glob-lev+1).val;
                tmp+=tmp_2;
                std::cout<<"    tmp="<<tmp<<"lev="<<lev<<std::endl;
                h_cur+=h_glob;
            }
            catch(...)
            {
                std::cout<<"catched"<<std::endl;
                h_cur=0;
                result+=tmp;
                tmp="";
                break;
            }
        }
    }
    return result;

}
int main()
{
    std::string str;
    int num;
    std::cout<<"enter string:"<<std::endl<<"   str= ";
    std::cin>>str;
    std::cout<<"size="<<str.size()<<std::endl<<"enter number of levels:"<<std::endl<<"   num=";
    std::cin>>num;
    std::vector<elem> A=fill_structure(str,num),B;
    for(int i=0;i<A.size();i++)
    {
        std::cout<<A[i].val<<" "<<A[i].level<<" "<<A[i].number<<std::endl;
    }
    std::string result=make_str(A,num);
    std::cout<<result<<"  size="<<result.size()<<std::endl;
    


}