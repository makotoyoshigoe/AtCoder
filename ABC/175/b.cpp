#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void){
    int n, r = 0;
    cin >> n;
    vector<int> l(n);
    for(int i=0; i<n; ++i) cin >> l[i];
    sort(l.begin(), l.end());
    for(int i=0; i<n-2; ++i){
        for(int j=i+1; j<n-1; ++j){
            for(int k=j+1; k<n; ++k){
                if(l[j]>l[i] && l[k]>l[j] && l[i]+l[j]>l[k]){
                    ++r;
                }
            }
        }
    }
    cout << r << endl;
    return 0;
}