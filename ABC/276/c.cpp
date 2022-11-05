#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0; i<n; ++i) cin >> p[i];
    int mx = *max_element(p.begin(), p.end());
    int m = 1;
    for(int i=1; i<=n; ++i) m*i;
}