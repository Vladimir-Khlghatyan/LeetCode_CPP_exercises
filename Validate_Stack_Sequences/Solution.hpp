#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <string>
# include <vector>
# include <stack>
# include <algorithm>

class Solution
{
	public:
		bool validateStackSequences(std::vector<int> &pushed, std::vector<int> &popped);
		bool validArguments(std::string &s1, std::string &s2, std::vector<int> &v1, std::vector<int> &v2);

	private:
		std::vector<std::string> split(const std::string &str, char c);
		bool stacksAreEqual(std::stack<int> &s1, std::stack<int> s2);
};

#endif
