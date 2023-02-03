#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> g;
vector<bool> vis;

void dfs(int c){
    vis[c] = true;
    for(int &d : g[c]){
        if(vis[d]) continue;
        dfs(d);
    }
}

int main(void){
    int n, m;
    cin >> n >> m;
    g.resize(n);
    vis.assign(n, false);
    int u, v;
    for(int i=0; i<m; ++i){
        cin >> u >> v;
        g[u-1].push_back(v-1);
        g[v-1].push_back(u-1);
    }
    int r = 0;
    for(int i=0; i<n; ++i){
        if(!vis[i]) ++r, dfs(i);
    }
    cout << r << endl;
    return 0;
}