#include<bits/stdc++.h>

int main(void){
    int a, b;
    std::string r("Even");
    std::cin >> a >> b;
    if(a*b%2 != 0) r = "Odd";
    std::cout << r << std::endl;
    return 0; 
}