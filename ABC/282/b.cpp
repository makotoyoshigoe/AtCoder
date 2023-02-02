#include<iostream>

using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    bool s[n][m];
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            char c;
            cin >> c;
            s[i][j] = (c == 'o') ? true : false;
        }
    }
    int r = 0;
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            bool judge = true;
            for(int k=0; k<m; ++k){
                judge *= (s[i][k]||s[j][k]);
            }
            r += judge;
        }
        
    }
    cout << r << endl;
    return 0;
}