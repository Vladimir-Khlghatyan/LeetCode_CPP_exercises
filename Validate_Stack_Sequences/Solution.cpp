#include "Solution.hpp"

bool Solution::validateStackSequences(std::vector<int> &pushed, std::vector<int> &popped)
{
	std::stack<int> pushedStack;
	std::stack<int> poppedStack;	

	for (auto it = popped.rbegin(); it != popped.rend(); ++it)
		poppedStack.push(*it);

	for (auto it = pushed.rbegin(); it != pushed.rend(); ++it)
	{
		if (!pushedStack.empty() && !poppedStack.empty() && \
			pushedStack.top() == poppedStack.top())
		{
			pushedStack.pop();
			poppedStack.pop();
		}

		if (*it == poppedStack.top())
			poppedStack.pop();
		else
			pushedStack.push(*it);
	}
	if (pushedStack.size() > 1)
		return false;
	return stacksAreEqual(pushedStack, poppedStack) ? true : false;
}

bool Solution::validArguments(std::string &s1, std::string &s2, std::vector<int> &v1, std::vector<int> &v2)
{
	size_t found1 = s1.find_first_not_of(" 0123456789");
	size_t found2 = s2.find_first_not_of(" 0123456789");
	if (s1 == "" || s2 == "" || found1 != std::string::npos || found2 != std::string::npos)
		return false;

	std::vector<std::string> vecS1 = split(s1, ' ');
	std::vector<std::string> vecS2 = split(s2, ' ');

	if (vecS1.size() != vecS2.size())
		return false;

	for (size_t i = 0; i < vecS1.size(); ++i)
	{
		try {
			v1.push_back(std::stoi(vecS1[i]));
			v2.push_back(std::stoi(vecS2[i]));
		} catch (...) {
			return false;
		}
	}

	for (size_t i = 0; i < v1.size(); ++i)
	{
		auto it = std::find(v2.begin(), v2.end(), v1[i]);
			if (it == v2.end())
				return false;
	}
	return true;
}

std::vector<std::string> Solution::split(const std::string &str, char c)
{
	std::vector<std::string>	tokens;
	std::string					token;

	size_t i = -1;
	size_t len = str.length();
	while (++i < len)
	{
		while (i < len && str[i] == c)
			++i;
		while (i < len && str[i] != c)
			token += str[i++];
		if (token != "")
			tokens.push_back(token);
		token = "";
	}
	return tokens;
}

bool Solution::stacksAreEqual(std::stack<int> &s1, std::stack<int> s2)
{
	if (s1.size() != s2.size())
		return false;

	while (!s1.empty())
	{
		if (s1.top() != s2.top())
			return false;
		s1.pop();
		s2.pop();
	}
	return true;
}
