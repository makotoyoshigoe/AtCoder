#include<iostream>
#include<string>

using namespace std;

int main(void){
    int n;
    string s;
    cin >> n >> s;
    bool dq = false;
    for(int i=0; i<n; ++i){
        if(dq && s[i] == '"') dq = false;
        else if(s[i] == '"') dq = true;
        if(!dq && s[i] == ',') s[i] = '.';
        cout << s[i];
    }
    cout << endl;
    return 0;
}