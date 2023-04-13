#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <string>
# include <vector>
# include <stack>

class Solution
{
	public:
		std::string simplifyPath(std::string &path);

	private:
		std::vector<std::string> split(const std::string &str, char c);
};

#endif
