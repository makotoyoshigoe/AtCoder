#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(void){
    int w, h, n, i = 0;
    cin >> w >> h >> n;
    vector<vector<int>> r(h, vector<int>(w, 1));
    for(i=0; i<n; ++i){
        int x, y, a;
        int xs = 0, xe = 0, ys = 0, ye = 0;
        cin >> x >> y >> a;
        switch (a){
        case 2:
            xs = x;
            xe = w;
            ys = 0;
            ye = h;
            break;
        case 1:
            xs = 0;
            xe = x;
            ys = 0;
            ye = h;
            break;
        case 4:
            xs = 0;
            xe = w;
            ys = y;
            ye = h;
            break;
        case 3:
            xs = 0;
            xe = w;
            ys = 0;
            ye = y;
        }
        for(int j=xs; j<xe; ++j){
            for(int k=ys; k<ye; ++k){
                r[k][j] = 0;
            }
        }
    }
    int s = 0;
    for(i=0; i<h; ++i) s += accumulate(r[i].begin(), r[i].end(), 0);
    cout << s << endl;
    return 0;
}