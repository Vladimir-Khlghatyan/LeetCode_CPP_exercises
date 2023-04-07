#include "Solution.hpp"

int	main(void)
{
	std::vector<std::vector<int>> grid1, grid2;
	grid1 = {{0,0,0,0},
			 {1,0,1,0},
			 {0,1,1,0},
			 {0,0,0,0}};

	grid2 = {{0,1,1,0},
			 {0,0,1,0},
			 {0,0,1,0},
			 {0,0,0,0}};
	
	Solution obj;

	std::cout << obj.numEnclaves(grid1) << std::endl;
	std::cout << obj.numEnclaves(grid2) << std::endl;

	return 0;
}
