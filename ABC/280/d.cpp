#include<iostream>

using namespace std;

bool isprime(long long N) {
    if (N < 2) return false;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

int main(void){
    long long k;
    cin >> k;
    if(isprime(k)){
        cout << k << endl;
        return 0;
    }
    long long i = 1, d;
    long long r = 1;
    for(int i=1; ;++i){
        r *= i;
        if(r >= k && r % k == 0){
            cout << i << endl;
            return 0;
        }
    }
}