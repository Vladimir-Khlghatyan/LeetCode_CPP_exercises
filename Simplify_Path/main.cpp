#include "Solution.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Hint: one argument is required." << std::endl;
	else
	{
		Solution obj;
		std::string str;

		for (int i = 1; i < argc; ++i)
			str += static_cast<std::string>(argv[i]) + ((i != argc - 1) ? " " : "");

		std::cout << obj.simplifyPath(str) << std::endl;
	}

	return 0;
}
