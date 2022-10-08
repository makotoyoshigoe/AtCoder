#include<iostream>

using namespace std;

int main(void){
    int n, m = -1, b = 2;
    bool con = true;
    cin >> n;
    long int a[n];
    for(int i=0; i<n; ++i) cin >> a[i];

    while(con){
        m++;
        for(int i = 0; i < n; ++i){
            if(a[i] % b){
                con = false;
                break;
            }
        }
        b *= 2;
    }
    cout << m << endl;
    return 0;
}