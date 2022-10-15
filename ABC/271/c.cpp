#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(void){
    long long n;
    cin >> n;
    set<long long> a;
    long long A;
    for(int i=0; i<n; ++i){
        cin >> A;
        a.insert(A);
    }
    long long sold = n-a.size();
    vector<long long> b(a.begin(), a.end());
    long long s = 0;
    for(int i=0; i<n; ){
        if(i+1 == b[i]){++s;++i;}
        else{
            if(sold >= 2){
                ++s;
                sold -= 2;
            }
            else if(b.size()-i+sold >= 2){
                b.pop_back();
                b.pop_back();
                ++s;
            }else{
                break;
            }
        }
    }
    cout << s << endl;
    return 0;
}