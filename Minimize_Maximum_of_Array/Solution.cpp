#include "Solution.hpp"

int	Solution::minimizeArrayValue(std::vector<int> &nums)
{
	bool flag = true;
	size_t i = 1;
	while (true)
	{
		if (flag == false)
			break ;
		flag = false;
		if (i == nums.size())
			i = 1 ;
		while (isValidOperation(nums, i) == true)
			flag = true;
		++i;
	}
	printNums(nums);
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

