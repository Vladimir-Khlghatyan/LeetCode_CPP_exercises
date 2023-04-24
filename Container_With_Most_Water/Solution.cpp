#include "Solution.hpp"

int Solution::maxArea(std::vector<int>& height)
{
	int max = 0;
	int len = height.size();
	for (int i = 0; i < len; ++i)
		max = std::max(max, maxArevOfIndex(height, i, max));
	return max;
}

int Solution::maxArevOfIndex(std::vector<int> &height, int index, int max)
{
	if (height[index] == 0)
		return max;

	int i = 0, len = height.size();	
	while (i < len)
	{
		max = std::max(std::min(height[i], height[index]) * std::abs(i - index), max);		
		i = std::max(index + (max / height[index]) + 1, i + 1);
	}
	return max;
}