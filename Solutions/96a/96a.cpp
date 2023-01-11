#include <iostream>
#include <string>

int main()
{
    std::string s{};
    std::cin>>s;
    int count{0};
    char cur{s[0]};
    for (char c:s)
    {
        if (c==cur)
        {
            count++;
        }
        else
        {
            count=1;
            cur=c;
        }
        
        if (count>=7)
        {
            std::cout<<"YES";
            return 0;
        }
    }
    std::cout<<"NO";
    return 0;
}
