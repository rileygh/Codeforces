#include <iostream>

int main()
{
    int n{};
    std::cin>>n;
    while (n--)
    {
        int x{};
        std::cin>>x;
        if (x==1)
        {
            std::cout<<"HARD";
            return 0;;
        }
    }
    std::cout<<"EASY";
    return 0;
}