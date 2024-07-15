#include<iostream>
#include<string>
#include<algorithm>

int main(void)
{
    int r, g, b;
    std::string c;
    std::cin >> r >> g >> b;
    std::cin >> c;
    if(c == "Red"){
        std::cout << std::min(g, b);
    } else if(c == "Blue"){
        std::cout << std::min(r, g);
    } else {
        std::cout << std::min(r, b);
    }
    std::cout << std::endl;
    return 0;
}