#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    int n = 0, r = 0, al = 0, bo = 0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a, a+n, greater<int>());
    for(int i=0; i<n; ++i){
        if(i%2 == 0) al += a[i];
        else bo += a[i];
    }
    r = al - bo;
    cout << r << endl;
    return 0;
}