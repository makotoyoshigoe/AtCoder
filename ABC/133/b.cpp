#include<iostream>
#include<math.h>

using namespace std;
 
int main(void){
    int n, d, r = 0;
    cin >> n >> d;
    double x[n][d];
    for(int i=0; i<n; ++i){
        for(int j=0; j<d; ++j){
            cin >> x[i][j];
        }
    }
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            double a = 0;
            for(int k=0; k<d; ++k){
                a += pow(x[i][k]-x[j][k], 2);  
            }
            r += (floor(sqrt(a)) == sqrt(a));
        }
    }
    cout << r << endl;
    return 0;
}