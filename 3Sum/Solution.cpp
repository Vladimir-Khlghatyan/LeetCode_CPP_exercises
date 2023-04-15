#include "Solution.hpp"

std::vector<std::vector<int>> Solution::threeSum(std::vector<int>& nums)
{
	std::vector<std::vector<int>> output;
	std::set<std::vector<int>> st;

	std::sort(nums.begin(), nums.end());
	for (size_t i = 0; i < nums.size() - 2; ++i)
	{
		int j = i + 1, k = nums.size() - 1;
		while (j < k)
		{
			int sum = nums[i] + nums[j] + nums[k];
			if (sum == 0)
				st.insert({nums[i], nums[j++], nums[k--]});
			else
				(sum < 0) ? j++ : k--;
		}
	}
		
	for (auto &s : st)
        output.push_back(s);;
	return output;        
}


std::vector<int> Solution::parsArgument(std::string &str)
{
	std::vector<std::string> tokens = split(str, ' ');
	std::vector<int> nums;

	for (auto &token : tokens)
	{
		try { nums.push_back(std::stoi(token));	}
		catch (...) { std::cerr << "Invalid arguments!" << std::endl; throw -1;	}
	}
	return nums;
}

void Solution::printSums(std::vector<std::vector<int>> &sums)
{
	std::cout << "[";
	for (size_t i = 0; i < sums.size(); ++i)
	{
		std::cout << "[";
		for (size_t j = 0; j < sums[i].size(); ++j)
		{
			std::cout << sums[i][j];
			if (j == sums[i].size() - 1 && i == sums.size() - 1)
				std::cout << "]]" << std::endl;
			else
				std::cout << ((j == sums[i].size() - 1) ? "], " : ", ");
		}
	}
}

std::vector<std::string> Solution::split(const std::string &str, char c)
{
	std::vector<std::string>	tokens;
	std::string					token;

	size_t i = -1;
	size_t len = str.length();
	while (++i < len)
	{
		while (i < len && str[i] == c)
			++i;
		while (i < len && str[i] != c)
			token += str[i++];
		if (token != "")
			tokens.push_back(token);
		token = "";
	}
	return tokens;
}
