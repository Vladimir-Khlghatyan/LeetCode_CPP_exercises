#include "Median.hpp"

double Median::findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2)
{
    size_t	i = 0, j = 0, len = nums1.size() + nums2.size();
	std::vector<int>	nums;

    while (i < nums1.size() && j < nums2.size())
			nums.push_back((nums1[i] < nums2[j]) ? nums1[i++] : nums2[j++]);
    while (i < nums1.size())
		nums.push_back(nums1[i++]);
    while (j < nums2.size())
		nums.push_back(nums2[j++]);
	return len % 2 ? nums[len / 2] : (nums[len / 2 - 1] + nums[len / 2]) / 2.0;
}