#include<iostream>
#include<cmath>

using namespace std;

int calc(int a, int b){
    int la = log10(a), lb = log10(b);
    if(la >= lb) return la+1;
    else return lb+1;
}

int main(void){
    long int n;
    cin >> n;
    int r = 100;
    int rn = sqrt(n);
    for(double i=1; i<=rn; ++i){
        double j = n / i;
        if(j == (int)j && r > calc(i, j)) r = calc(i, j);
    }
    cout << r << endl;
    return 0;
}