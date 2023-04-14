#include "Solution.hpp"

int	main(void)
{
	std::string s1;
	std::string s2;

	std::vector<int> pushed;
	std::vector<int> popped;

	std::cout << "pushed: " << std::flush;
	std::getline(std::cin, s1);
	std::cout << "popped: " << std::flush;
	std::getline(std::cin, s2);

	Solution obj;
	if (!obj.validArguments(s1, s2, pushed, popped))
	{
		std::cout << "Invalid arguments!" << std::endl;
		return 1;
	}
	else
		std::cout << (obj.validateStackSequences(pushed, popped) ? "true" : "false") << std::endl;
	return 0;
}
