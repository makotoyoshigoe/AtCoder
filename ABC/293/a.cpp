#include<iostream>

using namespace std;

int main(void){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i+=2){
        cout << s[i+1] << s[i];
    }
    cout << endl;
    return 0;
}