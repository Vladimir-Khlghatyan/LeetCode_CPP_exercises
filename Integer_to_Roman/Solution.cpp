#include "Solution.hpp"

std::string	Solution::intToRoman(int num) // 1 <= num <= 3999
{
	std::string	roman;
	int			values[]  = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	std::string	symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	int i = 0;

	while (num > 0)
	{
		if (num >= values[i])
		{
			roman += symbols[i];
			num -= values[i];
			continue ;
		}
		i++;
	}
	return roman;
}