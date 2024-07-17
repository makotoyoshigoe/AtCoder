#include<iostream>
#include<vector>
#include<string>

void suudoku(
    std::vector<std::vector<int>> &map, 
    std::vector<std::vector<std::vector<int>>> &res)
{   
    int solve_i = -1, solve_j = -1, search_end = 0;
    for(int i=0; i<9; ++i){
        for(int j=0; j<9; ++j){
            if(map[i][j] == -1){
                solve_i = i;
                solve_j = j;
                search_end = 1;
                break;
            } 
        }
        if(search_end == 1) break;
    }
    if(solve_i == -1 || solve_j == -1){
        res.push_back(map);
        return;
    }

    std::vector<bool> candidate(9, true);
    for(int v=1; v<10; ++v){
        for(int k=0; k<9; ++k){
            if(map[solve_i][k] == v){
                candidate[v-1] = false;
            }
            if(map[k][solve_j] == v){
                candidate[v-1] = false;
            }
        }
        int start_i = solve_i-solve_i%3, end_i = start_i+3;
        int start_j = solve_j-solve_j%3, end_j = start_j+3;
        for(int i=start_i; i<end_i; ++i){
            for(int j=start_j; j<end_j; ++j){
                if(map[i][j] == v){
                    candidate[v-1] = false;
                }
            }
        }
    }
    
    for(int i=1; i<10; ++i){
        if(candidate[i-1]){
            map[solve_i][solve_j] = i;
            suudoku(map, res);
        }
    }
    map[solve_i][solve_j] = -1;
}

int main(void)
{
    std::vector<std::vector<int>> map(9, std::vector<int>(9, -1));
    std::string s;
    for(int i=0; i<9; ++i){
        std::cin >> s;
        for(int j=0; j<9; ++j){
            if(s[j] == '*') continue;
            map[i][j] = s[j] - '0';
        }
    }
    std::vector<std::vector<std::vector<int>>> res;
    suudoku(map, res);
    if(res.size() == 0) std::cout << "None" << std::endl;
    else{
        for(auto &m: res){
            for(int i=0; i<9; ++i){
                for(int j=0; j<9; ++j){
                    std::cout << m[i][j] << " ";
                }
                std::cout << std::endl;
            }
        }
    }
}
