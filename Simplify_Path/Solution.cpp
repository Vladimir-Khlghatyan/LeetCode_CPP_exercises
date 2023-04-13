#include "Solution.hpp"

std::string Solution::simplifyPath(std::string &path)
{
	std::vector<std::string>	tokens = split(path, '/');
	std::stack<std::string>		st1;
	std::stack<std::string>		st2;
	std::string 				shortPath;

	for (std::vector<std::string>::iterator it = tokens.begin(); it != tokens.end(); ++it)
	{
		if (*it == ".." && !st1.empty())
			st1.pop();
		else if (*it != "." && *it != "..")
			st1.push(*it);
	}

	while (!st1.empty())
	{
		st2.push(st1.top());
		st1.pop();
	}

	while (!st2.empty())
	{
		shortPath += "/" + st2.top();
		st2.pop();
	}

	if (shortPath.empty())
		shortPath = "/";
	return shortPath;
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
