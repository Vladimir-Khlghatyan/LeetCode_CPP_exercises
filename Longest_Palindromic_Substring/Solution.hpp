#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <string>

class Solution
{
	public:
		std::string longestPalindrome(std::string &str);
	private:
		void palindromic(std::string &str, std::string &answer, size_t index);
};

#endif
