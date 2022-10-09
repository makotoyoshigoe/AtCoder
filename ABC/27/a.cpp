#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    int n, x, i = 0, r = 0, d = 0;
    cin >> n >> x;
    int a[n];
    for(i=0; i<n; ++i) cin >> a[i];
    sort(a, a+n);
    for(i=0; i<n; ++i){
        x -= a[i];
        if(x == 0){
            ++r;
            break;
        }else if(x < 0) break;
        else ++r;
    }
    if(x > 0) r -= 1;
    cout << r << endl;
}