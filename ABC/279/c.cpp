#include<iostream>
#include<vector>

using namespace std;

void shift(vector<string> arr){
    for(int i=0; i<arr.size(); ++i){
        char s = arr[i][0];
        int j=1;
        for(j=0; j<arr[i].size(); ++j){
            arr[i][j] = arr[i][j+1];
        }
        arr[i][j] = s;
        cout << arr[i] << endl;
    }
}

int main(void){
    int h, w;
    cin >> h >> w;
    vector<string> s(w), t(w);
    for(int i=0; i<h; ++i) cin >> s[i];
    for(int i=0; i<h; ++i) cin >> t[i];
    bool end = true;
    for(int i=0; i<w; ++i){
        for(int j=0; j<w; ++j){
            if(s[j] != t[j]){
                end = false;
                break;
            }else end = true;
        }
        if(end == true){
            cout << "Yes" << endl;
            return 0; 
        }
        shift(s);
    }
    cout << "No" << endl;
    return 0;
}