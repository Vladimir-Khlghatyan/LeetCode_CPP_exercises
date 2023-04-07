#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <vector>
# include <string>

class Solution
{
	public:
		int closedIsland(std::vector<std::vector<int>> &grid);

	private:
		bool island(std::vector<std::vector<int>> &grid, size_t i, size_t j);
};

#endif
