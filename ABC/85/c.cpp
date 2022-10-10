#include<iostream>

using namespace std;

int main(void){
    int n, y, r[3] = {-1, -1, -1};
    cin >> n >> y;
    for(int i=0; i<=n; ++i){
        for(int j=0; j<=n-i; ++j){
            int k = n - i - j;
            if(10000*i + 5000*j + 1000*k == y){
                r[0] = i;
                r[1] = j;
                r[2] = k;
                break;
            }
        }
    }
    for(int i=0; i<3; ++i) cout << r[i] << " ";
    cout << endl;
    return 0;
}