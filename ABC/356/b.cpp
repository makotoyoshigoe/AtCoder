#include<iostream>
#include<vector>

int main(void)
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(m, 0), r(m, 0);
    for(auto &x: a) std::cin >> x;
    int x;
    for(int N=0; N<n; ++N){
        for(int M=0; M<m; ++M){
            std::cin >> x;
            r[M] += x;
        }
    }
    for(int M=0; M<m; ++M){
        if(a[M] > r[M]){
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    std::cout << "Yes" << std::endl;
    return 0;
}