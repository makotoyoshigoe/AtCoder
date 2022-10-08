#include<iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    for(int i=1; i <= 9; ++i){
        for(int j=i; j<=9; ++j){
            if(i*j == n){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}