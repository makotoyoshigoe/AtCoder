#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(void){
    string s, a[4] = {"eraser", "erase", "dreamer", "dream"};
    cin >> s;
    reverse(s.begin(), s.end());
    for(int i=0; i<4; ++i) reverse(a[i].begin(), a[i].end());
    int i = 0;
    while(i<s.size()){
        bool j2 = false;
        for(int j=0; j<4; ++j){
            string d = a[j];
            if(s.substr(i, d.size()) == d){
                i += d.size();
                j2 = true;
                break;
            }
        }
        if(!j2){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}