#include "Solution.hpp"

int	main(void)
{
	std::string input;
	std::vector<int> nums;
	std::vector<std::vector<int>> sums;

	Solution obj;

	std::cout << "Enter numbers: ";
	std::getline(std::cin, input);
	try { nums = obj.parsArgument(input); }
	catch (...) { return 1;	}

	sums = obj.threeSum(nums);
	obj.printSums(sums);

	return 0;
}
