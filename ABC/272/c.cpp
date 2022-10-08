#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
    int n;
    long int r = -1;
    cin >> n;
    vector<long int> o, e;
    long int a;
    for(int i=0; i<n; ++i){
        cin >> a;
        if(a % 2 == 0) e.push_back(a);
        else o.push_back(a);
    }
    sort(o.rbegin(), o.rend());
    sort(e.rbegin(), e.rend());
    if(o.size() >= 2) r = max(r, o[0]+o[1]);
    if(e.size() >= 2) r = max(r, e[0]+e[1]);
    cout << r << endl;
}