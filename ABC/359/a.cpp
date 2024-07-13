#include<iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    std::string s;
    // std::string s;
    int c = 0;
    for(int i=0; i<n; ++i){
        cin >> s;
        if(s =="Takahashi") ++c;
    }
    cout << c << endl;
    return 0;
}