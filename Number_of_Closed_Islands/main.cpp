#include "Solution.hpp"

int	main(void)
{
	std::vector<std::vector<int>> grid1, grid2, grid3;
	grid1 = {{1, 1, 1, 1, 1, 1, 1, 0},
			 {1, 0, 0, 0, 0, 1, 0, 0},
			 {1, 0, 1, 0, 1, 1, 1, 0},
			 {1, 0, 0, 0, 0, 1, 0, 1},
			 {1, 1, 1, 1, 1, 1, 1, 0}};

	grid2 = {{0, 0, 1, 0, 0},
			 {0, 1, 0, 1, 0},
			 {0, 1, 1, 1, 0}};

	grid3 = {{1, 1, 1, 1, 1, 1, 1},
			 {1, 0, 0, 0, 0, 0, 1},
			 {1, 0, 1, 1, 1, 0, 1},
			 {1, 0, 1, 0, 1, 0, 1},
			 {1, 0, 1, 1, 1, 0, 1},
			 {1, 0, 0, 0, 0, 0, 1},
			 {1, 1, 1, 1, 1, 1, 1}};

	Solution obj;
	std::cout << obj.closedIsland(grid1) << std::endl;
	std::cout << obj.closedIsland(grid2) << std::endl;
	std::cout << obj.closedIsland(grid3) << std::endl;

	return 0;
}
