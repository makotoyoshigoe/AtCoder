#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void){
    int n, l, i;
    cin >> n >> l;
    string s[n];
    for(i=0; i<n; ++i) cin >> s[i];
    sort(s, s+n);
    for(i=0; i<n; ++i) cout << s[i];
    cout << endl;
    return 0;
}