#include <iostream>
#include <string>

int main() 
{
    int n{};
    std::cin>>n;
    int x{0};
    std::string str{};

    for (int i{0};i<n;i++)
    {
        std::cin>>str;
        if (str[1]=='+')
        {
            x++;
        }
        else if (str[1]=='-')
        {
            x--;
        }
    }
    std::cout<<x;
    return 0;
}