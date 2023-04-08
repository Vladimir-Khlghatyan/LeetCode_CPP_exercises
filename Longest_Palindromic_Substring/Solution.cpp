#include "Solution.hpp"

std::string Solution::longestPalindrome(std::string &str) 
{
	std::string answer = str.substr(0,1);

	for (size_t i = 0; i < str.length(); ++i)
	{
		if (answer.length() > str.length() - i)
			return answer;
		palindromic(str, answer, i);
	}	
	return answer;        
}

void Solution::palindromic(std::string &str, std::string &answer, size_t index)
{
	std::string tmp;
	size_t i, j = str.length() - 1, k;
	for (; j > index; --j)
	{
		i = index;
		k = j;
		if (answer.length() > k - i)
			return ;
		while (k >= i)
		{
			if (str[i] == str[k])
			{
				if (k - i <= 1)
				{
					tmp = str.substr(index, k + i - 2 * index + 1);
					answer = (tmp.length() > answer.length()) ? tmp : answer;
					break ;
				}
				i++;
				k--;
			}
			else
				break ;           
		}
	}
}
