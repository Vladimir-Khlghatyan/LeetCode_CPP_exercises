#include "Solution.hpp"

int	main(void)
{
	std::string input;
	std::vector<std::string> tokens;
	std::vector<int> nums;
	int target;

	Solution obj;

	std::cout << "Enter numbers: ";
	std::getline(std::cin, input);
	tokens = obj.split(input, ' ');
	try	{
		for (size_t i = 1; i < tokens.size(); ++i)
			nums.push_back(std::stoi(tokens[i]));
	} catch (...) {
		std::cout << "Bad argument!" << std::endl;
		return 1;
	}

	std::cout << "Enter target: ";
	std::getline(std::cin, input);
	try	{
		target = std::stoi(input);
	} catch (...) {
		std::cout << "Bad argument!" << std::endl;
		return 2;
	}
	
	std::vector<int> output = obj.searchRange(nums, target);
	std::cout << "Output: [" << output[0] << ", " << output[1] << "]\n";
	return 0;
}
