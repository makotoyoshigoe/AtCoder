#include<iostream>
#include<cmath>
#include<tuple>
#include<algorithm>
#include<vector>

using namespace std;

int main(void){
    int n;
    tuple<long long, long long, long long> G = make_tuple(-1, -1, -1);
    cin >> n;
    int x[n], y[n], flag = 0;
    long long h[n];
    for(int i=0; i<n; ++i){
        cin >> x[i] >> y[i] >> h[i];
        if(h[i] >= 1 && flag == 0){
            G = make_tuple(x[i], y[i], h[i]);
            flag = 1;
        }
    }
    for(int i=0; i<=100; ++i){
        for(int j=0; j<=100; ++j){
            long long V = get<2>(G) + abs(get<0>(G) - i) + abs(get<1>(G) - j); V = max(V, 0LL); bool flag = true;
			for (int k=0; k<n; ++k) {
				long long VV = V - abs(x[k] - i) - abs(y[k] - j); VV = max(VV, 0LL);
				if (h[k] != VV) flag = false;
			}
			if (flag == true){
                cout << i << " " << j << " " << V << endl;
                return 0;
            }
        }
    }
    return 0;
}