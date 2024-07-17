#include<iostream>
#include<vector>
#include<algorithm>

int main(void)
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n, 0), b(m, 0), c;
    for(int i=0; i<n; ++i){
        std::cin >> a[i];
        c.push_back(a[i]);
    }
    for(int i=0; i<m; ++i){
        std::cin >> b[i];
        c.push_back(b[i]);
    }
    std::sort(c.begin(), c.end());
    for(int i=0; i<n+m; ++i){
        for(int j=0; j<n; ++j){
            if(c[i] == a[j]){
                for(int k=0; k<n; ++k){
                    if(c[i+1] == a[k]){
                        std::cout << "Yes" << std::endl;
                        return 0;
                    }
                }
            }
        }
    }
    std::cout << "No" << std::endl;
    return 0;
}