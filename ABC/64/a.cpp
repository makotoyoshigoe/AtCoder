#include<bits/stdc++.h>

int main(void){
    std::string r, g, b, res("YES");
    std::cin >> r >> g >> b;
    std::string rgb(r + g + b);
    int n = atoi(rgb.c_str());
    if(n%4 != 0) res = "NO";
    std::cout << res << std::endl;
    return 0;
}