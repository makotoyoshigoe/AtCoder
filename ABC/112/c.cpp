#include<iostream>
#include<cmath>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int x, y, h, cx = 0, cy = 0;
    for(int i=0; i<n; ++i){
        cin >> x >> y >> h;
        cx += x;
        cy += y;
    }
    if(cx >= 100) cx = 100;
    else cx /= n;
    if(cy >= 100) cy = 100;
    else cy /= n;
    // cx /= n;
    // cy /= n;
    // cx = ceil(cx);
    // cy = ceil(cy);
    int H = h + abs(x - cx) + abs(y - cy);
    cout << cx << " " << cy << " " << H << endl;
    return 0;
}