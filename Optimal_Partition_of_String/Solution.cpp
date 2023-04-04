#include "Solution.hpp"

int	Solution::partitionString(std::string &str)
{
	std::unordered_set<char> letters;
	int substrings = 1;

	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		if (letters.count(*it))
		{
			substrings++;
			letters.clear();
		}
		letters.insert(*it);
	}
	return (str == "") ? 0 : substrings;
}
