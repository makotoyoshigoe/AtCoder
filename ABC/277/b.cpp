#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){
    int n, r = 0;
    cin >> n;
    vector<string> s(n);
    string c1 = "HDCS", c2 = "A23456789TJQK";
    for(int i=0; i<n; ++i){
        cin >> s[i];
        if(c1.find(s[i][0]) == -1 || c2.find(s[i][1]) == -1) r = -1;
    }
    if(r == -1){
        cout << "No" << endl;
        return 0;
    }
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(s[i] == s[j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}