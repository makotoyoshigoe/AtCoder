#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<numeric>

std::vector<int> conv_ten2two(int num, int n)
{
    std::vector<int> zero_one(n, 0);
    int i = 0;
    do{
        zero_one[i] = num % 2;
        num /= 2;
        ++i;
    }while (num>1);
    zero_one[i] = num;
    std::reverse(zero_one.begin(), zero_one.end());
    return zero_one;
}

std::vector<std::vector<int>> gen_zero_one(int n)
{
    int comb = pow(2, n);
    std::vector<std::vector<int>> res(comb, std::vector<int>(n, 0));
    for(int i=0; i<comb; ++i){
        res[i] = conv_ten2two(i, n);
    }
    return res;
}

int main(void)
{
    int n, w;
    std::cin >> n>> w;
    std::vector<int> a(n, 0);
    for(auto &x: a) std::cin >> x;
    std::vector<std::vector<int>> zero_ones = gen_zero_one(n);
    int res = 0;
    for(auto &x: zero_ones){
        int in_pro = std::inner_product(a.begin(), a.end(), x.begin(), 0);
        if(in_pro == w) ++res;
    }
    std::cout << res << std::endl;
    return 0;
}