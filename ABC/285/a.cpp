#include<iostream>

using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    if(b == 2*a || b == 2*a+1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}