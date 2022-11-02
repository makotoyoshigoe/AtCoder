#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int n, i = 0, d = 2;
    cin >> n;
    vector<int> r(10, 0);
    do{
        r[i] = n % 2;
        n /= d;
        ++i;
    }while(n >= 2);
    r[i] = n;
    for(i=9; i>=0; --i) cout << r[i];
    cout << endl;
    return 0;
}