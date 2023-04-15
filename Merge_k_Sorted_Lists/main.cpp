#include "Solution.hpp"

int	main(void)
{
	std::string input;
	ListNode *lst;
	std::vector<ListNode *> lists;

	Solution obj;

	std::cout << "Please enter lists (type END to exit):" << std::endl;
	for (int i = 0; i >= 0; ++i)
	{
		std::cout << "list" << i << ": ";
		std::getline(std::cin, input);
		if (input == "END")
			break;
		try {
			lst = obj.parsArgument(input);
			lists.push_back(lst);
		} catch (...) {
			obj.deleteLists(lists);
			return 1;
		}
	}

	lst = obj.mergeKLists(lists);
	obj.printList(lst);

	obj.deleteList(lst);
	obj.deleteLists(lists);

	return 0;
}
