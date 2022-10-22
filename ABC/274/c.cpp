#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n), b(2*n+1, 0);
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    cout << b[0] << endl;
    for(int i=1; i<2*n+1; i+=2){
        b[i] += b[a[(int)((i+1)/2)-1]-1] + 1;
        b[i+1] = b[i];
        cout << b[i] << endl << b[i] << endl;
    }
    return 0;
}