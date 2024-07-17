#include<iostream>
#include<vector>

void func(
    std::vector<std::vector<int>> gs, 
    std::vector<int> g, 
    std::vector<bool> &visit)
{
    for(int i=0; i<g.size(); ++i){
        if(!visit[g[i]]){
            visit[g[i]] = true;
            func(gs, gs[g[i]], visit);
        }
    }
}

int main(void)
{
    int n, m, u, v;
    std::cin >> n >> m;
    std::vector<std::vector<int>> g(n);
    std::vector<bool> visit(n, false);
    for(int i=0; i<m; ++i){
        std::cin >> u >> v;
        g[u-1].push_back(v-1);
        g[v-1].push_back(u-1);
    }

    int res = 0;
    for(int i=0; i<n; ++i){
        if(!visit[i]){
            visit[i] = true;
            ++res;
            func(g, g[i], visit);
        }
    }
    std::cout << res << std::endl;
    return 0;
}
