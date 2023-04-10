#include "Solution.hpp"

bool Solution::isValid(std::string &str)
{
	std::stack<char> parenthesis;

	for (size_t i = 0; i < str.length(); ++ i)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			parenthesis.push(str[i]);
		else if (parenthesis.empty())
			return false;
		else
		{
			if (str[i] == ')' && parenthesis.top() != '(')
				return false;
			if (str[i] == ']' && parenthesis.top() != '[')
				return false;
			if (str[i] == '}' && parenthesis.top() != '{')
				return false;
			parenthesis.pop();
		}
	}

	if (parenthesis.empty())
		return true;
	return false;
}
