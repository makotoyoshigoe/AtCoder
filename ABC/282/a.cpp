#include<iostream>

using namespace std;

int main(void){
    int k;
    char a = 'A';
    cin >> k;
    for(int i=0; i<k; ++i){
        cout << a;
        ++a;
    }
    cout << endl;
    return 0;
}