#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(void){
    int n, i = 0, d;
    cin >> n;
    set<int> r;
    for(i=0; i<n; ++i){
        cin >> d;
        r.insert(d);
    }
    cout << r.size() << endl;
    return 0; 
}