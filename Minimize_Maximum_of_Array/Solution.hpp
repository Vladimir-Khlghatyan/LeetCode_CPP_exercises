#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <vector>
# include <cstdlib>

class Solution
{
	public:
		int		minimizeArrayValue(std::vector<int> &nums);

	public:
		bool	isValidOperation(std::vector<int> &nums, int index);
		void	printNums(std::vector<int> &nums) const;
};

#endif
