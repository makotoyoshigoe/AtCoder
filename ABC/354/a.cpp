#include<iostream>
#include<cmath>

int main(void)
{
    int h;
    std::cin >> h;
    float r = floor(log2(h+1)+1);
    std::cout << r << std::endl;
    return 0;
}   