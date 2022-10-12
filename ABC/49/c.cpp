#include<iostream>
#include<string>

using namespace std;

int main(void){
    string s, a[4] = {"eraser", "erase", "dreamer", "dream"};
    cin >> s;
    int j = -1;
    for(int i=0; i<4; ++i){
        while((j = s.find(a[i])) != string::npos){
            for(int k=0; k<a[i].size()-1; ++k)
                s.erase(s.begin()+j+k);
        }
    }
    cout << s << endl;
    if(s.size() == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}