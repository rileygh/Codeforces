#include <iostream> 
#include <string>
#include <set>

int main()
{
    std::string s;
    std::cin>>s;
    
    std::set<char> d;
    for (char c:s)
    {
        d.insert(c);
    }
    if (d.size()%2==0)
    {
        std::cout<<"CHAT WITH HER!";
    }
    else 
    {
        std::cout<<"IGNORE HIM!";
    }
    return 0;
}