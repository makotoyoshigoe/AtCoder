#include<iostream>
#include<string>

using namespace std;

int main(void){
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; ++i) cin >> s[i];
    for(int i=n-1; i>=0; --i) cout << s[i] << endl;
    return 0;
}