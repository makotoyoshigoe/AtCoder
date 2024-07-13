#include<iostream>
#include<vector>

// std::vector<std::vector<bool>> sub_matrix(
// 	std::vector<bool> t; 
// 	std::vector<std::vector<bool>> ts
// )
// {

// }

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	// std::vector<std::string> s(n, "");
	std::vector<std::vector<bool>> t(n, std::vector<bool>(m, false));
	std::vector<int> u(n, 0);
	char s;
	for(int i=0; i<n; ++i){
		u[i] = i;
		for(int j=0; j<m; ++j){
			std::cin >> s;
			if(s == 'o') t[i][j] = true;
		}
	}
	std::vector<int> sum(n, 1);
	for(int i=0; i<n; ++i){
		std::vector<int> index;
		for(int j=0; j<m; ++j){
			if(t[i][j] == false) index.push_back(j);
		}
		for(int j=i+1; j<n; ++j){
			for()
		}
	}
	return 0;
}

