#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main(void){
    int n, k, a;
    cin >> n >> k;
    map<int, int> mp;
    vector<int> b(n, 0);
    set<int> value;
    for(int i=0; i<n; ++i){
        cin >> a;
        value.insert(a);
        b[a-1]++;
    }
    sort(b.begin(), b.end());
    int s = value.size(), r = 0;
    for(int i=0; i<n; ++i){
        if(s<=k) break;
        r += b[i];
        if(b[i] > 0) s--;
    }
    cout << r << endl;
    return 0;
}