#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(void){
    int n, m, i = 0;
    cin >> n >> m;
    vector<vector<int>> r(n, vector<int>(n, 0)); 
    int a, b; 
    for(i=0; i<m; ++i){
        cin >> a >> b;
        ++r[a-1][b-1];
        ++r[b-1][a-1];
    }
    for(i=0; i<n; ++i){
        int s = accumulate(r[i].begin(), r[i].end(), 0);
        cout << s << endl;
    }
    return 0;
}