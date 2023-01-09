#include <iostream>

int t,n,a[10005];
int main()
{
    std::cin>>t;
    while (t--)
    {
        std::cin>>n;
        for (int i{1};i<=n;i++)    
        {
            std::cin>>a[i];
        }
        int mask{1},has_zero_sum{-1};
        for (int i{1};i<=n;i++)
        {
            mask*=3;
        }
        for (int i{1};i<mask;i++)
        {
            int ms{i},sum{0};
            for (int k{1};k<=n;k++)
            {
                int flag{ms%3};
                ms/=3;
                if (flag==1)
                {
                    sum+=a[k]*1;
                }
                if (flag==2)    
                {
                    sum+=a[k]*-1;
                }
            }
            if (sum==0)
            {
                has_zero_sum=1;
                std::cout<<"YES"<<std::endl;
                break;
            }
        }
        if (has_zero_sum==-1)    
        {
            std::cout<<"NO"<<std::endl;
        }
    }
    return 0;
}
