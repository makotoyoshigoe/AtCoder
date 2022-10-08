#include<iostream>

using namespace std;

int main(void){
    int n, a, max, min;
    cin >> n >> max;
    min = max;
    for(int i=0; i<n-1; ++i){
        cin >> a;
        if(min > a) min = a;
        else if(max < a) max = a;
    }
    int r = max-min;
    cout << r << endl;
    return 0;
}