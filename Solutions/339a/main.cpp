#include <iostream>
#include <regex>
#include <algorithm>
#include <vector>
#include <numeric>

int main() {
    std::string s{};
    std::cin>>str;

    std::vector<int> n{};
    std::regex nums("\\d+");
    std::for_each(std::sregex_iterator(s.begin(),s.end(),nums),
                  std::sregex_iterator(),
                  [&n](const std::smatch& match){n.push_back(std::stoi(match.s()));});

    std::sort(n.begin(),n.end());

    std::string sorted{std::accumulate(n.begin(),n.end(),std::string{},[](const std::string& a,int b)
                                       {return a+(a.empty()?"":"+")+std::to_string(b);})};

    std::cout<<sorted;

    return 0;
}
