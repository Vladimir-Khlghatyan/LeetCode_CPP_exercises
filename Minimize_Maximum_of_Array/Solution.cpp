#include "Solution.hpp"

int	Solution::minimizeArrayValue(std::vector<int> &nums)
{
	size_t	steps = 0;
	size_t	i = 1;
	while (true)
	{
		if (nums[0] == *(std::max_element(nums.begin(), nums.end())))
			return (nums[0]);
		if (i == nums.size() && steps == nums.size() - 1)
			break ;
		if (i == nums.size())
		{
			steps = 0;
			i = 1;
		}
		if (isValidOperation(nums, i) == false)
			steps++;
		while (isValidOperation(nums, i) == true)
			;
		printNums(nums);
		++i;
	}
	auto max_value = std::max_element(nums.begin(), nums.end());
	return *max_value;
}

bool Solution::isValidOperation(std::vector<int> &nums, int index)
{
	if (nums[index] == 0)
		return false;

	auto max_value = std::max_element(nums.begin(), nums.end());

	if (nums[index - 1] < *max_value - 1)
	{
		nums[index - 1]++;
		nums[index]--;
		return true;
	}
	return false;
}

void	Solution::printNums(std::vector<int> &nums) const
{
	for (size_t i = 0; i < nums.size(); ++i)
	{
		if (i == 0)
			std::cout << "[" << nums[i] << ", ";
		else if (i == nums.size() - 1)
			std::cout << nums[i] << "]\n";
		else
			std::cout << nums[i] << ", ";
	}
}

