#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    int n, n3, i = 0;
    long int r = 0;
    cin >> n;
    n3 = n * 3;
    long int a[n3];
    for(i=0; i<n3; ++i) cin >> a[i];
    sort(a, a+n3, greater<int>());
    for(i=1; i<n3-n; i += 2) r += a[i];
    cout << r << endl;
    return 0;
}