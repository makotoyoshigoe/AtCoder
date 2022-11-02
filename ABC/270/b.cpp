#include<iostream>
#include<cmath>

using namespace std;

int main(void){
    int x, y, z;
    cin >> x >> y >> z;
    if(abs(x) > abs(y) && abs(z) > abs(y)){
        cout << -1 << endl;
        return 0;
    }
    int r = abs(x);
    if(x > z && z < 0) r += 2*abs(z);
    cout << r << endl;
    return 0;
}