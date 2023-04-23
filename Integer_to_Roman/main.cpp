#include "Solution.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Hint: one argument is required." << std::endl;
	else
	{
		int num;

		try {
			num = std::stoi(argv[1]);
		} catch (...) {
			std::cout << "Bad argument!" << std::endl;
			return 1;
		}
		 if (num < 1 || num > 3999)
		 {
			std::cout << "Please enter number in range [1, 3999]." << std::endl;
			return 2;
		 }

		Solution obj;
		std::cout << obj.intToRoman(num) << std::endl;
	}

	return 0;
}
