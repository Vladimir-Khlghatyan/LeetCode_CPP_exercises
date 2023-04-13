#include "Solution.hpp"

std::string Solution::simplifyPath(std::string &path)
{
	std::vector<std::string>	tokens = split(path, '/');
	std::vector<std::string> 	simpleTokens;
	std::string 				shortPath;

	for (std::vector<std::string>::iterator it = tokens.begin(); it != tokens.end(); ++it)
	{
		if (*it == ".." && !simpleTokens.empty())
			simpleTokens.pop_back();
		else if (*it != "." && *it != "..")
			simpleTokens.push_back(*it);
	}

	for (std::vector<std::string>::iterator it = simpleTokens.begin(); it != simpleTokens.end(); ++it)
		shortPath += "/" + *it;

	return shortPath.empty() ? static_cast<std::string>("/") : shortPath;
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
