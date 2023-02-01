#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    long int n, t, sum = 0;
    cin >> n >> t;
    long int a[n], b[n], e[n];
    for(int i=0; i<n; ++i){
        cin >> a[i];
        sum += a[i];
        e[i] = sum;
        b[i] = sum - a[i];
    }
    t -= sum*(t/sum);
    for(int i=0; i<n; ++i){
        if(b[i] <= t && e[i] >= t){
            cout << i+1 << " "<< t - b[i] << endl;
            return 0;
        }
    }
}