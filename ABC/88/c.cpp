#include<iostream>

using namespace std;

int main(void){
    int c[3][3], a[3] = {0, 0, 0}, b[3] = {0, 0, 0}, r = 0;
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            cin >> c[i][j];
        }
    }
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            for(a[0]=0; a[0]<=c[0][0]; ++a[0]){
                for(int k=0; k<3; ++k) b[k] = c[0][k] - a[0];
                for(int k=1; k<3; ++k) a[k] = c[k][0] - b[0];
                for(int k=1; k<3; ++k) for(int l=1; l<3; ++l) if(c[k][l] == a[k]+b[l]) ++r; else break;
                if(r == 4){
                        cout << "Yes" << endl;
                        return 0;
                }
                r = 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}