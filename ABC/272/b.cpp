#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> r(n, vector<bool>(n, false));
    int k, x;
    for(int i=0; i<m; ++i){
        cin >> k;
        int x[k];
        for(int j=0; j<k; ++j) cin >> x[j];
        for(int j=0; j<k; ++j){
            for(int l=j+1; l<k; ++l){
                r[x[j]-1][x[l]-1] = true;
            }
        }
    }
    int sum = 0;
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(r[i][j] == false){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}