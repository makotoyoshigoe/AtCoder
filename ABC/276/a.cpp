#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

int main(void){
    string s;
    cin >> s;
    int r = s.rfind("a");
    if(r >= 0) r++;
    cout << r << endl;
    return 0; 
}