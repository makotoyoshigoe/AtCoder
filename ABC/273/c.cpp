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
    map<int, int> mp;
    long long A;
    for(int i=0; i<n; ++i){
        cin >> A;
        ++mp[A];
    }

    for(auto it=mp.rbegin(); it != mp.rend(); ++it) cout << it->second << endl;  
    for(int i=0; i<n-mp.size(); ++i) cout << 0 << endl;
    return 0;
}