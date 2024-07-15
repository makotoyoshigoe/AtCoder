#include<iostream>
#include<string>

int main(void)
{
    std::string s;
    std::cin >> s;
    int l = 0, small = 0;
    for(auto &c: s){
        if(c >= 'A' && c <= 'Z') ++l;
        else ++small;
    }
    if(small > l){
        for(auto &c: s){
            if(c >= 'A' && c <= 'Z') c += 32;
        }
    }else{
        for(auto &c: s){
            if(c >= 'a' && c <= 'z') c -= 32;
        }
    }
    std::cout << s << std::endl;
    return 0;
}