#include<iostream>

using namespace std;

int main(void){
    int n;
    int d = 1, m = 1, r = 0;
    cin >> n;
    long long a, b;
    for(int i=0; i<n; ++i){
        cin >> a;
        switch (d)
        {
        case 1:
            d = 2;
            break;
        
        case 2:
            if(a > b) m = 1;
            else if(a < b) m = 2;
            else m = 3;
            if(m < 3) d = 3;
        
        case 3:
            if(m == 1 && b > a || m == 2 && b < a){
                ++r;
                d = 2;
            }
        } 
        b = a;
    }
    cout << r+1 << endl;
}