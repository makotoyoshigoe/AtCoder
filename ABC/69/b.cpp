#include<bits/stdc++.h>

int main(void){
    std::string s;
    std::cin >> s;
    std::string r(s[0]+std::to_string(s.size() - 2)+s[s.size()-1]);
    std::cout << r << std::endl;
}