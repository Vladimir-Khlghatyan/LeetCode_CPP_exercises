#include "Solution.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Hint: one argument is required." << std::endl;
		return 1;
	}
	std::string arg = argv[1];

	Solution obj;
	std::cout << obj.partitionString(arg) << std::endl;
	
	return 0;
}
