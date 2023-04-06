#include "Solution.hpp"

int	Solution::minimizeArrayValue(std::vector<int> &nums)
{
	size_t maxAvg = 0, currSum = 0, currAvg;

	for (size_t i = 0; i < nums.size(); ++i)
	{
		currSum += nums[i];
		currAvg = ceil((1.0 * currSum) / (i + 1));
		maxAvg = std::max(maxAvg, currAvg);
	}
	return maxAvg;
}

