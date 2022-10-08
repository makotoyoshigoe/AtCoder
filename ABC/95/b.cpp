#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

int main(void){
    int n, x, i;
    cin >> n >> x;
    vector<int> m(n);
    int sum = n;
    for(int i=0; i<n; ++i) cin >> m[i];
    x -= accumulate(m.begin(), m.end(), 0);
    i = *min_element(m.begin(), m.end());
    sum += x / i;
    cout << sum << endl;
    return 0;
}