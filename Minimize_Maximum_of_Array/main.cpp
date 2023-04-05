#include "Solution.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Hint: at least one argument is required." << std::endl;
		return 1;
	}

	std::vector<int> nums;
	int	n;
	for (int i = 1; i < argc; ++i)
	{
		n = atoi(argv[i]);
		if (n < 0)
		{
			std::cout << "Error: non-negative integers are required." << std::endl;
			return 2;
		}
		nums.push_back(n);
	}

	Solution obj;
	std::cout << obj.minimizeArrayValue(nums) << std::endl;

	return 0;
}
