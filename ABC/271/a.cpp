#include<iostream>

using namespace std;

int main(void){
    int n, d = 16;
    char s[6] = {'F', 'E', 'D', 'C', 'B', 'A'}; 
    cin >> n;
    int a = n / d, b = n % d;
    if(a >= 10) cout << s[15-a];
    else cout << a;
    if(b >= 10) cout << s[15-b];
    else cout << b;
    cout  << endl;
    return 0;
}