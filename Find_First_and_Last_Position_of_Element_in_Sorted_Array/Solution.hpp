#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <string>
# include <vector>
# include <climits>

class Solution
{
	public:
		std::vector<int> searchRange(std::vector<int> &nums, int target);
		std::vector<std::string> split(const std::string &str, char c);

	private:
		void dfs(std::vector<int> &nums, int target, std::vector<int> &output, int start, int end);		
};

#endif
