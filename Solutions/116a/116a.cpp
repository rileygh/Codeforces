#include <iostream>

int main()
{
    int n{};
    std::cin>>n;
    int s{0},p{0},m{0};
    while (n--)
    {
        s++;
        int a{},b{};
        std::cin>>a>>b;
        p-=a;
        p+=b;
        if (p>m)
        {
            m=p;
        }
    }
    std::cout<<m;
    return 0;
}