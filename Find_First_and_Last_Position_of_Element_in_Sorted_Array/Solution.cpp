#include "Solution.hpp"

std::vector<int> Solution::searchRange(std::vector<int>& nums, int target)
{
	std::vector<int> output = {-1, -1};
	if (nums.size() == 1 && nums[0] == target)
		return {0, 0};
	dfs(nums, target, output, 0, nums.size() - 1);
	return output;
}

void Solution::dfs(std::vector<int>& nums, int target, std::vector<int>& output, int start, int end)
{
	if (end < start || nums[start] > target || nums[end] < target)
		return ;

	if (nums[start] == target && (output[0] > start || output[0] == -1))
		output[0] = start;

	if (nums[end] == target && output[1] < end)
		output[1] = end;

	if (end == start)
		return ;

	dfs(nums, target, output, start, (start + end) / 2);
	dfs(nums, target, output, (start + end) / 2 + 1, end);
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