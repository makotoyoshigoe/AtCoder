#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> as;
    int a, c = 0;
    for(int i=0; i<2*n; ++i){
        cin >> a;
        as.push_back(a);
        if(as.size() > 2 && as[i] == as[i-2]){
            ++c;
        }
    }
    cout << c << endl;
    return 0;
}