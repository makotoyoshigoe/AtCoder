#include<bits/stdc++.h>

int main(void){
    std::string s;
    std::cin >> s;
    int a = 0; 
    for(int i=0; i<3; ++i) a += (s[i] == '1');
    std::cout << a << std::endl;
    return 0;
}