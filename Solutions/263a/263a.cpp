#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

int main()
{
    int moves{0};
    std::vector<std::vector<int>> matrix;
    for (int i{0};i<5;i++)
    {
        std::vector<int> r;
        for (int j{0}; j < 5; j++)
        {
            int x;
            std::cin>>x;
            r.push_back(x);
        }
        for (int j:r)
        {
            if (j==1&&std::distance(r.begin(),std::find(r.begin(),r.end(),j))!=2)
            {
                int moves_needed{std::abs(2-std::distance(r.begin(),std::find(r.begin(),r.end(),j)))};
                moves+=moves_needed;
                r[std::distance(r.begin(),std::find(r.begin(),r.end(),j))]=0;
                r[2]=1;
            }
        }
        matrix.push_back(r);
    }

    if (matrix[2][2]!=1)
    {
        for (const auto& i:matrix)
        {
            if (i[2]==1)
            {
                int moves_needed{std::abs(2-std::distance(matrix.begin(),std::find(matrix.begin(),matrix.end(),i)))};
                moves+=moves_needed;
            }
        }
    }
    std::cout<<moves<<std::endl;
    return 0;
}
