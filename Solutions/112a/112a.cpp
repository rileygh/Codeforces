#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string s1{},s2{};
    std::cin>>s1>>s2;
    for (int i=0;i<s1.length();i++) 
    {
        char c1=std::tolower(s1[i]);
        char c2=std::tolower(s2[i]);

        if (c1>c2)
        {
            std::cout<<"1";
            return 0;
        }
        else if (c1<c2) 
        {
            std::cout<<"-1";
            return 0;
        }
    }
    std::cout<<"0";
    return 0;
}