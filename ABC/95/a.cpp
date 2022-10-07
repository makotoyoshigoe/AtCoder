#include<bits/stdc++.h>

int main(void){
    std::string s;
    std::cin >> s;
    int r = 700;
    for(int i=0; i<s.size(); ++i) r += 100*(s[i] == 'o');
    std::cout << r << std::endl;
    return 0;
}