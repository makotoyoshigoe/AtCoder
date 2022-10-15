#include<iostream>

using namespace std;

int calc(int x){
    if(x == 0) return 1;
    return x * calc(x-1); 
}

int main(void){
    int n;
    cin >> n;
    int r = calc(n);
    cout << r << endl;
    return 0;
}