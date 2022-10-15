#include<iostream>
#include<vector>

using namespace std;

int main(void){
    long long n, q, l, A;
    cin >> n >> q;
    long long s[q], t[q];
    vector<vector<long long>> a(n, vector<long long>(0, 0));
    for(int i=0; i<n; ++i){
        cin >> l;
        for(int j=0; j<l; ++j){
            cin >> A;
            a[i].push_back(A);
        }
    }
    for(int i=0; i<q; ++i) cin >> s[i] >> t[i];
    for(int i=0; i<q; ++i) cout << a[s[i]-1][t[i]-1] << endl;
    return 0;
}