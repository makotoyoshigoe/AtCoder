#include<iostream>
#include<string>

using namespace std;

bool isUppercase(char c){
    if(c >= 'A' and c <= 'Z') return true;
    return false;
}

bool isNumber(char c){
    if(c >= '0' && c <= '9') return true;
    return false;
}

int main(void){
    string s;
    cin >> s;
    if(!isUppercase(s.front()) || !isUppercase(s.back())){
        cout << "No" << endl;
        return 0;
    }

    for(int i=1; i<s.size()-1; ++i){
        if(!isNumber(s[i])){
            cout << "No" << endl;
            return 0;
        }
    }

    if(size(s) != 8){
        cout << "No" << endl;
        return 0;
    }

    if(s[1] == '0'){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}