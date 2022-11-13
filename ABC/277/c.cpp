#include<iostream>
#include<map>

using namespace std;

int main(void){
    long long n, r = 1;
    cin >> n;
    long long a[n], b[n];
    map<int, int> mp;
    for(int i=0; i<n; ++i){
        cin >> a[i] >> b[i];
        if(a[i] > b[i] && mp[b[i]] < a[i]) mp[b[i]] = a[i];
        else if(a[i] <= b[i] && mp[a[i]] < b[i]) mp[a[i]] = b[i];
    }
    while((mp[r]) != 0){
        r = mp[r];
    }
    cout << r << endl;
    return 0;
}