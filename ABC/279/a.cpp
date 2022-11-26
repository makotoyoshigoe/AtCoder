#include<iostream>
#include<string>

using namespace std;

int main(void){
    string s;
    int r = 0;
    cin >> s;
    for(int i=0; i<s.size(); ++i){
        if(s[i] == 'v') ++r;
        else r += 2;
    }
    cout << r << endl;
    return 0;
}