#include "Median.hpp"

int	main(void)
{
	std::vector<int> nums1 = {1, 3};
	std::vector<int> nums2 = {2, 4};

	Median obj;
	std::cout << obj.findMedianSortedArrays(nums1, nums2) << std::endl;

	return 0;
}
