#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<int> a(n, 0);
    vector<vector<int>> r(n, vector<int>(0, 0));
    int A, B;
    for(int i=0; i<m; ++i){
        cin >> A >> B;
        a[A-1]++;
        a[B-1]++;
        r[A-1].push_back(B);
        r[B-1].push_back(A);
    }
    for(int i=0; i<n; ++i){
        cout << a[i] << " ";
        sort(r[i].begin(), r[i].end());
        int j = 0;
        for(int j=0; j<a[i]; ++j) cout << r[i][j] << " ";
        cout << endl;
    }
    return 0;
}