#include <string>
#include <iostream>
bool if_c_in_str(std::string max_s,char c)
{
    for(int i=0;i<max_s.size();i++)
    {
        if (c==max_s[i]) return true;
    }
    return false;

}
int main()
{
    std::string str="bbbbbbb",max_s,result;
    char c;
    int max;
    max_s=str[0];
    for(int i=0;i<str.size();i++)
    {
        c=str[i];
        std::cout<<"(new iter i)"<<std::endl;
        for(int j=i+1;j<str.size();j++)
        {
            c=str[j];
            std::cout<<"   (new iter j) c="<<c<<" max_s= "<<max_s<<std::endl;
            if(if_c_in_str(max_s,c))
            {
                std::cout<<"  c = "<<c<<" in max_s = "<<max_s+c<<std::endl;
                if(max<max_s.size()) {max=max_s.size();result=max_s;}
                max_s="";
                break;
            }
            max_s+=c;
        }
            if(max<max_s.size()) {max=max_s.size();result=max_s;}
            max_s="";
        
        
    }
    std::cout<<"result is "<<result<<" size= "<<max;


}

/*std::cout<<"new iteration, c="<<str[i]<<" i="<<i<<" max_s="<<max_s<<std::endl;
            c=str[i];
            std::cout<<"read c="<<c<<std::endl;
            if (if_c_in_str(max_s,c))
            {
                std::cout<<"  c in max_s,clearing"<<std::endl;
                max=max_s.size();
                max_s="";
                continue;
            }
            std::cout<<"   ok, "<<c<<" is not in "<<max_s<<"continue";
            max_s+=c;
*/