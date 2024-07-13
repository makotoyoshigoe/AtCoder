#include<iostream>

int main(void)
{
    int s, t, r = 0;
    std::cin >> s >> t;
    for(int a=0; a<=s; ++a){
        for(int b=0; b<=s; ++b){
            for(int c=0; c<=s; ++c){
                if(a+b+c<=s && a*b*c<=t) ++r;
            }
        }
    }
    std::cout << r << std::endl;
    return 0;
}