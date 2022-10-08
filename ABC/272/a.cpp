#include<iostream>

using namespace std;

int main(void){
    int n, a;
    cin >> n;
    int sum = 0;
    for(int i=0; i<n; ++i){
        cin >> a;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}