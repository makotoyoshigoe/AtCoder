#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
    string s;
    int i = 0, f = 0;
    char min = 'z';
    cin >> s;
    sort(s.begin(), s.end());
    for(i='a'; i<='z'; ++i){
        int r = s.find(i);
        if(r == string::npos && min >= i){
            min = i;
            f = 1;
        }
    }
    if(f == 0) cout << "None" << endl;
    else cout << min << endl;
    return 0;
}