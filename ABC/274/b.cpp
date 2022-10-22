#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int h, w;
    char s;
    cin >> h >> w;
    vector<int> c(w, 0);
    for(int i=0; i<h; ++i){
        int r = 0;
        for(int j=0; j<w; ++j){
            cin >> s;
            c[j] += (s == '#');
        }
    }
    for(int i=0; i<w; ++i) cout << c[i] << " ";
    cout << endl;
    return 0;
}   