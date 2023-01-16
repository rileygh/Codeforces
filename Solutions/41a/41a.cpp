#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string s{},t{};
    std::cin>>s;
    std::cin>>t;
    std::reverse(s.begin(),s.end());
    if (t==s)
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }
    return 0;
}