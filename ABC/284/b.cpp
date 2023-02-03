#include<iostream>

using namespace std;

int main(void){
    int t;
    cin >> t;
    int n, a;
    for(int i=0; i<t; ++i){
        cin >> n;
        int r = 0;
        for(int j=0; j<n; ++j){
            cin >> a;
            if(a%2 == 1) ++r;
        }
        cout << r << endl;
    }
    return 0;
}