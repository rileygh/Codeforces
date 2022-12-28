#include <iostream>

int main()
{
    int n{};
    std::cin>>n;
    int count{};
    for (int i=0;i<n;i++) 
    {
        int a{},b{},c{};
        std::cin>>a>>b>>c;
        if (a+b+c>=2)
        {
            count++;
        }
    }
    std::cout<<count;
    return 0;
}
