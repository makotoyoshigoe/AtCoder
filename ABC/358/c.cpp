#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<numeric>

std::vector<int> conv_ten2two(int num, int n)
{
    std::vector<int> zero_one(n, 0);
    int i = 0;
    do{
        zero_one[i] = num % 2;
        num /= 2;
        ++i;
    }while (num>1);
    zero_one[i] = num;
    std::reverse(zero_one.begin(), zero_one.end());
    return zero_one;
}

std::vector<std::vector<int>> gen_zero_one(int n)
{
    int comb = pow(2, n);
    std::vector<std::vector<int>> res(comb, std::vector<int>(n, 0));
    for(int i=0; i<comb; ++i){
        res[i] = conv_ten2two(i, n);
    }
    return res;
}

std::vector<std::vector<int>> bits_mat_mult(std::vector<int> bits, std::vector<std::vector<int>> mat)
{
	for(int i=0; i<bits.size(); ++i){
		for(int j=0; j<mat[i].size(); ++j){
			mat[i][j] *= bits[i];
		}
	}
	return mat;
}

std::vector<int> add_mat(std::vector<std::vector<int>> mat)
{
	int row = mat.size(), column = mat[0].size();
	std::vector<int> res(column, 0);
	for(int i=0; i<row; ++i){
		for(int j=0; j<column; ++j){
			res[j] += mat[i][j];
		}
	}
	return res;	 
}

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<int>> ss(n, std::vector<int>(m, false));
	std::vector<int> u(n, 0);
	char s;
	for(int i=0; i<n; ++i){
		u[i] = i;
		for(int j=0; j<m; ++j){
			std::cin >> s;
			if(s == 'o') ss[i][j] = true;
		}
	}
	std::vector<std::vector<int>> zero_ones = gen_zero_one(n);
	int sum = 100;
	for(auto &zero_one: zero_ones){
		std::vector<std::vector<int>> matrix = bits_mat_mult(zero_one, ss);
		std::vector<int> add_m = add_mat(matrix);
		bool in_zero = false;
		for(auto &sca: add_m){
			if(sca == 0){
				in_zero = true;
				continue;
			}
		}
		if(in_zero == false){
			int tmp = 0;
			for(auto &bit: zero_one) tmp += bit;
			if(sum > tmp) sum = tmp;
		}
	}
	std::cout << sum << std::endl;
	return 0;
}
