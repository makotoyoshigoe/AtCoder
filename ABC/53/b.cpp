#include<iostream>
#include<string>
using namespace std;

int main(void){
    string s;
    cin >> s;
    int a = s.find("A"), z = s.rfind("Z"), r = z - a + 1;
    cout << r << endl;
    return 0;
}