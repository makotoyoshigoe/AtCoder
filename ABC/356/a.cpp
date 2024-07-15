#include<iostream>
#include<vector>
#include<algorithm>

int main(void)
{
    int n, l, r;
    std::vector<int> a;
    std::cin >> n >> l >> r;
    for(int i = 0; i<n; ++i){
        a.push_back(i+1);
    }
    std::reverse(a.begin()+l-1, a.begin()+r);
    for(auto &x: a) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}