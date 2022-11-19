#include<iostream>
using namespace std;

int h, m, hm[2][2];
void update_hm(){
    hm[0][0] = (int)h/10;
    hm[0][1] = (int)m/10;
    hm[1][0] = h - hm[0][0]*10;
    hm[1][1] = m - hm[0][1]*10;
}

int main(void){
    cin >> h >> m;
    update_hm();
    while(hm[0][0]*10+hm[0][1] > 23 || hm[1][0]*10+hm[1][1] > 59){
        ++m;
        if(m == 60){
            m = 0;
            ++h;
            if(h == 24) h = 0;
        }
        update_hm();
    }
    cout << hm[0][0]*10 + hm[1][0] << " " << hm[0][1]*10 + hm[1][1] << endl;
    return 0;
}
