#include<iostream>
#include<cmath>

using namespace std;

int main(void){
    double x, k;
    cin >> x >> k;
    for(int i=0; i<k; ++i){
        x *= pow(10, -i-1);
        x = round(x);
        x *= pow(10, i+1);
        if(x<0) break;
    }
    cout << fixed << (long long)x << endl;
    return 0;
}