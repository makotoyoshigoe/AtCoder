#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int a, b, d = 10, r = 0;
    int x[5];
    cin >> a >> b;
    for(int i=a; i<= b; ++i){
        int n, m = i, j = 0;
        while(m > 0){
            x[j] = m % d;
            m /= d;
            ++j;
        }

        if(x[0] == x[4] && x[1] == x[3]) ++r;
    }
    cout << r << endl;
    return 0;
}