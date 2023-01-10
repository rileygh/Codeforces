#include <iostream>
#include <cmath>
#include <cstdint>

int main()
{
    int n{},m{},a{};
    std::cin>>n>>m>>a;
    std::int64_t i{(n+a-1)/a};
    std::int64_t j{(m+a-1)/a};
    std::cout<<i*j;
    return 0;
}