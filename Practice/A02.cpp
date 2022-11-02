#include<iostream>

using namespace std;

int main(void){
    int n, x, r;
    cin >> n >> x;
    for(int i=0; i<n; ++i){
        cin >> r;
        if(r == x){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}