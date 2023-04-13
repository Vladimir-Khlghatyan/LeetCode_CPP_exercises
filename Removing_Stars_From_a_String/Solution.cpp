#include "Solution.hpp"

std::string	Solution::removeStars(std::string &str)
{
	int flag = 0;
	std::string newStr;
	
	for (int i = str.length() - 1; i >= 0; --i)
	{
		if (str[i] == '*')
			flag++;
		else if (str[i] != '*' && flag != 0)
			flag--;
		else
			newStr += str[i];
	}
	std::reverse(newStr.begin(), newStr.end());
	return newStr;
}
