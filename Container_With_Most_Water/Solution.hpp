#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <string>
# include <vector>

class Solution
{
	public:
		int maxArea(std::vector<int> &height);

	private:
		int maxArevOfIndex(std::vector<int> &height, int index, int max);
};

#endif
