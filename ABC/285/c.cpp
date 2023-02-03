#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int ctoi(char c){
    return c - 'A' + 1;
}

int main(void){
    string s;
    cin >> s;
    long long r = 0;
    // reverse(s.begin(), s.end());
    for(long long i=0; i<s.size(); ++i) r *= 26, r += ctoi(s[i]);
    cout << r << endl;
    return 0;
}