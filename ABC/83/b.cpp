#include<iostream>

using namespace std;

int main(void){
    int n, a, b, r = 0, d = 10;
    cin >> n >> a >> b;
    for(int i=1; i<=n; ++i){
        int s = 0, m = i;
        while(m > 0){
            s += m % d;
            m /= d;
        }
        if(s >= a && s<= b) r += i;
    }
    cout << r << endl;
    return 0;
}