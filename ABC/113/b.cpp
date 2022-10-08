#include<iostream>
#include<math.h>

using namespace std;

int main(void){
    int n, t, a, h, r = 1;
    double dmin = 10e6;
    cin >> n >> t >> a;
    for(int i = 1; i <= n; ++i){
        cin >> h;
        double d = abs(a - (t - h * 0.006));
        if(dmin > d){
            r = i;
            dmin = d;
        }
    }
    cout << r << endl;
    return 0;
}