#include "Solution.hpp"

int Solution::numEnclaves(std::vector<std::vector<int>> &grid)
{
	_count = 0;
	int count = 0;
	for(size_t i = 0; i < grid.size(); i++)
	{
		for(size_t j = 0; j < grid[i].size(); j++)
		{
			if(grid[i][j] == 1)
			{
				if (islandcell(grid, i, j) == true )
					count += _count;
				_count = 0;
			}
		}
	}
	return count;
}

bool Solution::islandcell(std::vector<std::vector<int>>& grid, size_t i, size_t j)
{
	if (grid[i][j] == 0)
		return true;
	if (i == 0 || j == 0 || i == grid.size() - 1 || j == grid[i].size() - 1)
		return false;

	grid[i][j] = 0;

	if (islandcell(grid, i + 1, j) + islandcell(grid, i - 1, j) + \
		islandcell(grid, i, j + 1) + islandcell(grid, i, j - 1) == 4)
	{
		_count++;
		return true;
	}
	return false;
}
