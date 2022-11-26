#include<iostream>
#include<string>

using namespace std;

int main(void){
    string s, t;
    cin >> s >> t;
    if(s.size() < t.size()){
        cout << "No" << endl;
        return 0;
    }else if(s == t){
        cout << "Yes" << endl;
        return 0;
    }else{
        int d = s.size() - t.size();
        for(int i=0; i<=d; ++i){
            string u;
            for(int j=i; j<t.size()+i; ++j) u.push_back(s[j]);
            if(u == t){
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "No" << endl;
        return 0;
    }
}