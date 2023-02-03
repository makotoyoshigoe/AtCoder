#include<iostream>
#include<string>

using namespace std;

int ctoi(const char c){
  switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default : return -1;
  }
}

int main(void){
    string s;
    cin >> s;
    int n = s.size(), r = 0;
    bool zero = false;
    for(int i=0; i<n; ++i){
        int a = ctoi(s[i]);
        if(a){
            if(zero) r += 2;
            else ++r;
            zero = false;
        }else{
            if(zero){
                ++r;
                zero = false;
            }else zero = true;
        }
    }
    if(zero) ++r;
    cout << r << endl;
    return 0;
}