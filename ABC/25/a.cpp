#include<iostream>

using namespace std;

int calc(int x){
    int a = x, s = 0, d = 10;
    while(a > 0){
        s += a % d;
        a /= d;
    }
    return s;
}

int main(void){
    int n, b, r = 10e6;
    cin >> n;
    for(int a=1; a<n; ++a){
        b = n - a;
        int as = calc(a), bs = calc(b), s = as + bs;
        if(r > s) r = s;
    }
    cout << r << endl;
    return 0;
}