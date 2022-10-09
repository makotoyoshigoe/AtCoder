#include<iostream>

using namespace std;

int main(void){
    int n, k, r = 0;
    cin >> n >> k;
    do{++r;}while((n /= k) > 0);
    cout << r << endl;
    return 0;
}