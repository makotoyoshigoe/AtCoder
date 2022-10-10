#include<iostream>

using namespace std;

int main(void){
    int a, b, c, x, y, r = 0;
    cin >> a >> b >> c >> x >> y;
    if(a+b < 2*c){
        r = a*x + b*y;
    }else{
        if(x >= y){
            r = c*2*y;
            if(a >= 2*c) r += 2*c*(x-y);
            else r += a*(x-y);
        }
        else{
            r = c*2*x;
            if(b >= 2*c) r += 2*c*(y-x);
            else r += b*(y-x);
        }
    }
    cout << r << endl;
    return 0;
}