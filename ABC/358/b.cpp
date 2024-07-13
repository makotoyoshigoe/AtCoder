#include<iostream>
#include<vector>

int main(void)
{
	int n, a;
	std::cin >> n >> a;
	std::vector<int> t(n, 0);
	for(int i=0; i<n; ++i){
		std::cin >> t[i];
	}
	int sum = 0;
	for(int i=0; i<n; ++i){
		if(i == 0 || t[i] >= t[i-1] + a) sum = t[i] + a;
		else sum += a;
		std::cout << sum << std::endl;
	}
	return 0;
}

