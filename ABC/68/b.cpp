#include<iostream>
#include<math.h>

using namespace std;

int main(void){
    int n, r = 0, cmax = 0;
    cin >> n;
    for(int i=1; i<=n; ++i){
        int b = 2, c = 0;
        while(i % b == 0){
            ++c;
            b *= 2;
        }
        if(cmax <= c){cmax = c; r = i;}
    }
    cout << r << endl;
    return 0;
}