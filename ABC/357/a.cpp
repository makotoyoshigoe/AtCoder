#include<iostream>

int main(void)
{
    int n, m, h, r = 0;
    std::cin >> n >> m;
    for(int i=0; i<n; ++i){
        std::cin >> h;
        m -= h;
        if(m < 0){
            std::cout << r << std::endl;
            return 0;
        }else{
            ++r;
        }
    }
    std::cout << r << std::endl;
    return 0;
}
