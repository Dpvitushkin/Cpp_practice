#include <string>
#include <iostream>

std::string fill_str_nechet(std::string str)
{
    std::string tmp;
    for(int i=str.size()-1;i>0;i--)
    {
        tmp+=str[i];
    }

    return tmp+str;

}
std::string fill_str_chet(std::string str)
{
    std::string tmp;
    for(int i=str.size()-1;i>1;i--)
    {
        tmp+=str[i];
    }

    return tmp+str;

}
std::string nechet(std::string str)
{
    std::string max_pal,str_tmp;
    int size=str.size(),max_size=0,count;

    for(int i=1;i<size-1;i++)
    {
        str_tmp+=str.at(i);
        count=1;
        while(str[i-count]==str[i+count])
        {
            str_tmp+=str[i-count];
            count++;
        }
        str_tmp=fill_str_nechet(str_tmp);
        std::cout<<str_tmp<<std::endl;
        if(str_tmp.size()>max_size) {max_size=str_tmp.size();max_pal=str_tmp;}
        str_tmp="";

    }
    return max_pal;
}

std::string chet(std::string str)
{
    std::string max_pal,str_tmp;
    int size=str.size(),max_size=0,count;
    for(int i=0;i<size-1;i++)
    {
        count=1;
        if(str[i]==str[i+1])
        {
            str_tmp+=str[i];
            str_tmp+=str[i];
            
            while(str[i-count]==str[i+count+1])
            {
                str_tmp+=str[i-count];
                count++;
            }
            str_tmp=fill_str_chet(str_tmp);
            std::cout<<str_tmp<<std::endl;
            if(str_tmp.size()>max_size) {max_size=str_tmp.size();max_pal=str_tmp;}
            str_tmp="";

        }
    }
    return max_pal;
}
int main()
{
    std::string str,max_pal1,max_pal2,str_tmp;
    std::cin>>str;
    max_pal1=nechet(str);
    max_pal2=chet(str);
    std::string result=(max_pal1.size()>max_pal2.size()) ? max_pal1 : max_pal2;
    std::cout<<"result= "<<result<<" size="<<result.size();
}