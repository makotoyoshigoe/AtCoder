#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<long long> a(n, 0);
    set<long long> b;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        b.insert(a[i]);
    }
    vector<long long> c(b.begin(), b.end());
    vector<long long>::iterator itr;
    sort(c.begin(), c.end());
    map<int, int> mp;
    for(int j=0; j<c.size(); ++j){
            itr = find(c.begin(), c.end(), c[j]);
            mp[distance(itr, c.end()) - 1]++;
    }
    for(int i=0; i<n; ++i){
        cout << mp[i] << endl;  
    }
    return 0;
}