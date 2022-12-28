#include <iostream>
#include <algorithm>

int main()
{
    int n{},k{};
    std::cin>>n>>k;
    int participants[n]{};
    for (int i{0};i<n;i++) 
    {
        std::cin>>participants[i];
    }
    int kth{participants[k-1]};
    int ans{std::count_if(&participants[0],&participants[n],[&](int x){return x > 0 && x >= kth;})};
    std::cout<<ans;
    return 0;
}
