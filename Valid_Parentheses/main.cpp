#include "Solution.hpp"

int	main(void)
{
	std::string str;
	std::cout << "Enter string > ";
	std::getline(std::cin, str);

	if (str.find_first_not_of("()[]{}") != std::string::npos)
    	std::cout << "The string must only contain parentheses '()[]{}'." << std::endl;
	else
	{
		Solution obj;
		if (obj.isValid(str))
			std::cout << "true" << std::endl;
		else
			std::cout << "false" << std::endl;
	}

	return 0;
}
