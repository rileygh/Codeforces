#include <iostream>
#include <cmath>

int main()
{
    int el{};
    for (int i{0};i<5;i++)
    {
        for (int j{0};j<5;j++)
        {
            std::cin>>el;
            if (el==1)
            {
                std::cout<<abs(i-2)+abs(j-2)<<std::endl;
            }
        }
    }
    return 0;
}
