#include <iostream>

int main()
{
    int n;
    std::cin>>n;

    int c{0};
    char prev='\0';
    for (int i{1};i<=n;i++)
    {
        char cur;
        std::cin>>cur;

        if (cur==prev)
        {
            c++;
        }
        prev=cur;
    }
    std::cout<<c;
    return 0;
}