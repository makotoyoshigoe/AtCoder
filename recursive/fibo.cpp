#include<iostream>
#include<vector>
#include<time.h>

int fibo_org(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibo_org(n-2) + fibo_org(n-1);
}

long int fibo_memo(int n, std::vector<long int> &memo)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    if(memo[n] != -1) return memo[n];
    memo[n] = fibo_memo(n-2, memo) + fibo_memo(n-1, memo);
    return memo[n];
}

int main(void)
{
    int loop_n = 40;
    // clock_t start1 = clock();
    // for(int i=0; i<loop_n; ++i){
    //     int r = fibo_org(i);
    //     std::cout << r << std::endl;
    // }
    // double t1 = static_cast<double>(clock() - start1) / CLOCKS_PER_SEC * 1000.0;
    // std::cout << t1 << std::endl;

    std::vector<long int> memo(loop_n, -1);
    clock_t start2 = clock();
    for(int i=0; i<loop_n; ++i){
        int r = fibo_memo(i, memo);
        std::cout << r << std::endl;
    }
    double t2 = static_cast<double>(clock() - start2) / CLOCKS_PER_SEC * 1000.0;
    std::cout << t2 << std::endl;
    return 0;
}