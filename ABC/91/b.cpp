#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(void){
    int n, m;
    cin >> n;
    string s;
    map<string, int> mp;
    for(int i=0; i<n; ++i){
        cin >> s;
        mp[s]++;
    }
    cin >> m;
    for(int i=0; i<m; ++i){
        cin >> s;
        mp[s]--;
    }
    int max = 0;
    for(auto iter=mp.begin(); iter!=mp.end(); iter++){
        if(max < iter->second) max = iter->second;
    }
    cout << max << endl;
    return 0;
}