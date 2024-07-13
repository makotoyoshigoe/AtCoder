#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
    int n, r = 0;
    cin >> n;
    vector<bool>x(n, false);
    for(int i=0; i<n; ++i){
        int b;cin >> b;
        if(!x[i]) x[b-1] = true;
    }
    for(int i=0; i<n; ++i) r += x[i];
    cout << n-r << endl;
    for(int i=0; i<n; ++i) if(!x[i]) cout << i+1 << " ";
    cout << endl;
    return 0;
}