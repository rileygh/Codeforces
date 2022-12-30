#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s;
    std::cin>>s;
    std::cout<<static_cast<char>(toupper(s[0]))<<s.substr(1);
    return 0;
}