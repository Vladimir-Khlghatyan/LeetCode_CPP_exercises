#include "Solution.hpp"

int Solution::closedIsland(std::vector<std::vector<int>>& grid)
{
	int count = 0;
	for(size_t i = 0; i < grid.size(); i++)
		for(size_t j = 0; j < grid[i].size(); j++)
			if(grid[i][j] == 0)
				count += island(grid, i, j);
	return count;
}

bool Solution::island(std::vector<std::vector<int>>& grid, size_t i, size_t j)
{
	if (grid[i][j] == 1)
		return true;
	if (i == 0 || j == 0 || i == grid.size() - 1 || j == grid[i].size() - 1)
		return false;

	grid[i][j] = 1;

	if (island(grid, i + 1, j) + island(grid, i - 1, j) + \
		island(grid, i, j + 1) + island(grid, i, j - 1) == 4)
		return true;
	return false;
}
