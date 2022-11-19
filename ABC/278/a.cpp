#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    int b, i = 0;
    if(n <= k){
        for(i=0; i<n; ++i){
            cin >> b;
            cout << "0" << " ";
        }
        cout << endl;
        return 0;
    }else{
        for(i = 0; i < k; ++i) cin >> b;
        for(int j=i; j<n; ++j) cin >> a[j-i] ;
        for(i=0; i<n; ++i) cout << a[i] << " ";
        cout << endl;
        return 0;
    }
}