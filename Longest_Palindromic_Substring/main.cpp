#include "Solution.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "Hint: at least one argument is required." << std::endl;
	else
	{
		Solution obj;
		std::string str;

		for (int i = 1; i < argc; ++i)
		{
			str += argv[i];
			str += (i != argc - 1) ? " " : "";
		}
		std::cout << obj.longestPalindrome(str) << std::endl;
	}

	return 0;
}
