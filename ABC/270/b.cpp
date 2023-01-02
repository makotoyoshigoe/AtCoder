#include<iostream>
#include<cmath>

using namespace std;

int main(void){
    int x, y, z;
    cin >> x >> y >> z;
    if(y < 0){
        x = -x;
        y = -y;
        z = -z;
    }
    if(x < y){
        cout << abs(x) << endl;
        return 0;
    }else{
        if(y > z){
            cout << abs(z)+abs(x-z) << endl;
            return 0;
        }else{
            cout << -1 << endl;
            return 0;
        }
    }
}