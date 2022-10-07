#include<bits/stdc++.h>

int main(void){
    int n, a;
    std::string r("Yes");
    std::cin >> n >> a;
    int b = n % 500;
    if(a < b) r = "No";
    std::cout << r << std::endl;
    return 0; 
}