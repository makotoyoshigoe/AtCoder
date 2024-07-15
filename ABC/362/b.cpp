#include<iostream>
#include<vector>
#include<cmath>

int main(void)
{
    std::vector<std::vector<float>> x(3, std::vector<float>(2, 0));
    for(int i=0; i<3; ++i) std::cin >> x[i][0] >> x[i][1];
    int ab2 = pow(x[0][0]- x[1][0], 2) + pow(x[0][1]- x[1][1], 2);
    int bc2 = pow(x[1][0]- x[2][0], 2) + pow(x[1][1]- x[2][1], 2);
    int ca2 = pow(x[2][0]- x[0][0], 2) + pow(x[2][1]- x[0][1], 2);
    if(ab2==bc2+ca2 || bc2==ca2+ab2 || ca2==bc2+ab2) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;
    return 0;
}