#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int upper{0};
    int lower{0};
    for (char c:s) {
        if (std::isupper(c)) 
        {
            upper++;
        }
        else 
        {
            lower++;
        }
    }

    for (int i{0};i<s.length();i++) 
    {
        if (upper>lower)
        {
            s[i]=std::toupper(s[i]);
        }
        else
        {
            s[i]=std::tolower(s[i]);
        }
    }

    std::cout<<s;
    return 0;
}
