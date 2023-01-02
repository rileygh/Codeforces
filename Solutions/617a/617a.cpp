#include <iostream>

int main()
{
    int x;
    std::cin>>x;
    int s{0};
    while (x>0)
    {
        x-=5;
        s++;
    }
    std::cout<<s;
    return 0;
}