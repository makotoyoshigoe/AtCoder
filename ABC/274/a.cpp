#include<iostream>
#include<iomanip>

using namespace std;

int main(void){
    double a, b;
    cin >> a >> b;
    double r = b / a;
    cout << fixed << setprecision(3) << r << endl;
    return 0;
}