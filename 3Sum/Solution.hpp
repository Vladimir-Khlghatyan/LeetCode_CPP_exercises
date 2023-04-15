#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <string>
# include <vector>
# include <set>
# include <algorithm>

class Solution
{
	public:
		std::vector<std::vector<int>> threeSum(std::vector<int> &nums);
		std::vector<int> parsArgument(std::string &str);
		void printSums(std::vector<std::vector<int>> &sums);

	private:	
		std::vector<std::string> split(const std::string &str, char c);
};

#endif
