#include <iostream>
#include <string>
#include <algorithm>
#include <cstdint>

int main()
{
    std::int64_t n{}; // constraints require
    std::cin>>n;
    std::string s{std::to_string(n)};
    int count{std::count_if(s.begin(),s.end(),[](char c){return c=='4'||c=='7';})};
    std::string res{(count==4||count==7)?"YES":"NO"};
    std::cout<<res;
    return 0;
}