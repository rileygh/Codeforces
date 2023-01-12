#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int n{};
    std::cin>>n;
    std::string s{};
    std::cin>>s;
    int a_c{0},d_c{0};
    while (n--)
    {
        if (s[n]=='A')
        {
            a_c++;
        }
        else
        {
            d_c++;
        }
    }
    if (a_c>d_c)
    {
        std::cout<<"Anton";
    }
    else if (a_c<d_c)
    {
        std::cout<<"Danik";
    }
    else 
    {
        std::cout<<"Friendship";
    }
    return 0;
}