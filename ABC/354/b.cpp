#include<iostream>
#include<string>
#include<vector>

struct status
{
    std::string name;
    int rate;
};


int main(void)
{
    int n, sum_rate = 0;
    std::cin >> n;
    std::vector<status> data(n, {"hoge", 2});
    for(int i=0; i<n; ++i){
        std::string name;
        int rate;
        std::cin >> name >> rate;
        data[i] = {name, rate};
        sum_rate += rate;
    }
    for(int i=0; i<n; ++i){
        for(int j=i; j<n; ++j){
            if(data[i].name > data[j].name){
                status tmp;
                tmp = data[j];
                data[j] = data[i];
                data[i] = tmp; 
            }
        }
    }
    int index = sum_rate % n;
    std::string winner = data[index].name;
    std::cout << winner << std::endl;
    return 0;
}