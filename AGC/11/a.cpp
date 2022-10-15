#include<iostream>

using namespace std;

int main(void){
    long long n, c, k, a, b, r = 0, d;
    cin >> n >> c >> k;
    long long t[n];
    for(int i=0; i<n; ++i) cin >> t[i];
    a = t[0];
    for(int i=1; i<n; ++i){
        if(d == c || t[i]-a >= k){
            ++r;
            d = 0;
            a = t[i];
        }
        ++d;
    }
    cout << r << endl;
    return 0;
}