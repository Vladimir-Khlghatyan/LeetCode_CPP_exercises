#include "Solution.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "Hint: at least one argument is required." << std::endl;
	else
	{
		std::vector<int> nums;
		nums.reserve(argc - 1);

		try {
			for (int i = 1; i < argc; ++i)
				nums.push_back(std::stoi(argv[i]));
		} catch (...) {
			std::cout << "Bad argument!" << std::endl;
			return 1;
		}

		Solution obj;
		std::cout << obj.maxArea(nums) << std::endl;
	}
	return 0;
}
