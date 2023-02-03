#include<iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i) cin >> a[i];
    int q;
    cin >> q;
    int b, k, x;
    for(int i=0; i<q; ++i){
        cin >> b >> k;
        if(b == 2){
            cout << a[k-1] << endl;;
        }else{
            cin >> x;
            a[k-1] = x;
        }
    }
    return 0;
}