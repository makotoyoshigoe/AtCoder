#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void){
    int h, w, r = 0;
    cin >> h >> w;
    vector<string> s(h);
    for(int i=0; i<h; ++i) cin >> s[i];
    for(int i=0; i<h; ++i){
        for(int j=0; j<w; ++j){
            if(s[i][j] == '#'){
                ++r;
            }
        }
    }
    cout << r << endl;
    return 0;
}