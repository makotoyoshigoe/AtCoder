#include<iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    for(int i=0; i<25; ++i){
        for(int j=0; j<15; ++j){
            int sum = 4*i + 7*j;
            if(sum == n){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}