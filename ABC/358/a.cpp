#include<iostream>
#include<string>

int main(void)
{
	std::string s, t;
	std::cin >> s >> t;
	if(s == "AtCoder" && t == "Land") std::cout << "Yes" << std::endl;
	else std::cout << "No" << std::endl;
        return 0;
}

