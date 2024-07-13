#include<iostream>
#include<vector>

int main(void){
    int n, k, x;
    std::cin >> n >> k >> x;
    std::vector<int> as;
    for(int i=0; i<n; ++i){
        int a;
        std::cin >> a;
        as.push_back(a);
    }
    auto it = as.begin();
    it += k;
    as.insert(it, x);
    for(auto &i: as){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}