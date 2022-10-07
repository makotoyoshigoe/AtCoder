#include<bits/stdc++.h>

int main(void){
    std::string s, t, sd, td, r("no");
    std::cin >> s >> t;
    for(int i=0; i<t.size(); ++i){
        for(int j=0; j<s.size(); ++j){
            if(t[i] < s[j]){
                std::cout << r << std::endl;
                return 0;
            }
        }
    }

    // if(s[0] > t[0]) r = "yes"; 
    // std::cout << s[0] << std::endl;
}