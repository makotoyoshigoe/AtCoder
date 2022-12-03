#include<iostream>

using namespace std;

int main(void){
    long long n, a = 0, b = 0, s;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> s;
        a = s - b;
        cout << a << " ";
        b += a;
    }
    cout << endl;
    return 0;
}