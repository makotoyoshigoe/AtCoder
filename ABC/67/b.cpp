#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    int n, k, i = 0, r = 0;
    cin >> n >> k;
    int l[n];
    for(i=0; i<n; ++i) cin >> l[i];
    sort(l, l+n, greater<int>());
    for(i=0; i<k; ++i) r += l[i];
    cout << r << endl;
    return 0;
}