/*
nk = input()
n, k = [int(x) for x in nk.split()]

participants = [int(x) for x in input().split()]

kth = participants[k-1]
ans = sum(int(x) >= kth and int(x) > 0 for x in participants)
print(ans)
*/

#include <iostream>
#include <algorithm>

int main()
{
    int n{},k{};
    std::cin>>n>>k;
    int participants[n]{};
    for (int i=0;i<n;i++) 
    {
        std::cin>>participants[i];
    }
    int kth=participants[k-1];
    int ans=std::count_if(&participants[0],&participants[n],[&](int x){return x > 0 && x >= kth;});
    std::cout<<ans;
    return 0;
}