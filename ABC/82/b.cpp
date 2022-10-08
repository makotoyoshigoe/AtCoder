#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void){
    string s, t, r("No");
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());
    if(s < t) r = "Yes";
    cout << r << endl;
    return 0;
}