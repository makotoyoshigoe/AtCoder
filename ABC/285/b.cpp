#include<iostream>
#include<string>

using namespace std;

int main(void){
    int n;
    string s;
    cin >> n >> s;
    for(int i=1; i<n; ++i){
        int l = 0;
        for(l=0; l<n-1; ++l){
            int li = l + i;
            if(li > n-1 || s[l] == s[li]) break;
        }
        cout << l << endl;
    }
    return 0;
}