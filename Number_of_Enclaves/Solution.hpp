#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <vector>
# include <string>

class Solution
{
	public:
		int numEnclaves(std::vector<std::vector<int>> &grid);
	
	private:
		int _count;
		bool islandcell(std::vector<std::vector<int>> &grid, size_t i, size_t j);
};

#endif
