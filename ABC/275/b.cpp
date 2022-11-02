#include<iostream>

using namespace std;

int main(void){
    long long a, b, c, d, e, f, x, y;
    long long mod = 998244353;
    cin >> a >> b >> c >> d >> e >> f;
    x = ((a % mod) * (b % mod)) % mod;
    x = ((x % mod) * (c % mod)) % mod;
    y = ((d % mod) * (e % mod)) % mod;
    y = ((y % mod) * (f % mod)) % mod;
    long long r = (x + mod - y) % mod;
    cout << r << endl;
    return 0;
}