#include<iostream>

using namespace std;

int main(void){
    int a, b, c, x, r = 0;
    cin >> a >> b >> c >> x;
    for(int i=0; i<=a; ++i){
        for(int j=0; j<=b; ++j){
            for(int k=0; k<=c; ++k){
                int sum = 500*i + 100*j + 50*k;
                if(sum == x) ++r;
            }
        }
    }
    cout << r << endl;
    return 0;
}