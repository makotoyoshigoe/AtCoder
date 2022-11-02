#include<iostream>
 
using namespace std;

int main(void){
    int n;
    cin >> n;
    int h, r = 0, j;
    for(int i=1; i<=n; ++i){
        cin >> h;
        if(r < h){
            j = i;
            r = h;
        }
    }
    cout << j << endl;
}