#include<iostream>
#include<vector>

struct cood
    {
        int x;
        int y;
        int z;
    };

bool within(cood abc, cood def, cood ghi, cood jkl)
{
    // x
    if(!(ghi.x < abc.x && ghi.x > def.x)) return false;
    if(!(ghi.y < abc.y && ghi.y > def.y)) return false;
    if(!(ghi.z < abc.z && ghi.z > def.z)) return false;
    return true;
}

int main(void){
    int a, b, c, d, e, f;
    int g, h, i, j, k, l;
    std::cin >> a >> b >> c >> d >> e >> f;
    std::cin >> g >> h >> i >> j >> k >> l;
    std::vector<cood> c1(8), c2(8);
    cood abc, def, ghi, jkl;
    c1[0].x = a; c1[0].y = b; c1[0].z = c;
    c1[1].x = d; c1[1].y = b; c1[1].z = c;
    c1[2].x = a; c1[2].y = b; c1[2].z = f;
    c1[3].x = d; c1[3].y = b; c1[3].z = f;
    c1[4].x = a; c1[4].y = e; c1[4].z = c;
    c1[5].x = d; c1[4].y = e; c1[4].z = c;
    c1[6].x = a; c1[4].y = e; c1[4].z = f;
    c1[7].x = d; c1[7].y = e; c1[7].z = f;
    
    c2[0].x = g; c2[0].y = h; c2[0].z = i;
    c2[1].x = j; c2[1].y = h; c2[1].z = i;
    c2[2].x = g; c2[2].y = h; c2[2].z = l;
    c2[3].x = j; c2[3].y = h; c2[3].z = l;
    c2[4].x = g; c2[4].y = k; c2[4].z = i;
    c2[5].x = j; c2[4].y = k; c2[4].z = i;
    c2[6].x = g; c2[4].y = k; c2[4].z = l;
    c2[7].x = j; c2[7].y = k; c2[7].z = l;

    for(auto &C2: c2){
        
    }
    return 0;
}