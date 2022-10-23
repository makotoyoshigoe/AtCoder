#include<iostream>
#include<map>


using namespace std;

int main(void){
    int ab[2], d[3] = {4, 2, 1};
    map<int, int> mp;
    cin >> ab[0] >> ab[1];
    for(int i=0; i<2; ++i){
        for(int j=0; j<3; ++j){
            if(ab[i] - d[j] >= 0){
                mp[d[j]] = 1;
                ab[i] -= d[j];
            }
        }
    }
    int r = 0;
    for(auto it = mp.begin(); it != mp.end(); ++it){
        r += it->first * it ->second;
    }
    cout << r << endl;
    return 0;
}