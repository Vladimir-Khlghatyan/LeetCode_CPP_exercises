#include "Solution.hpp"

void printLst(const std::string &msg, ListNode *list);
void deleteLst(ListNode *list);

int	main(void)
{
	ListNode *list1 = new ListNode(2, new ListNode(4, new ListNode(3)));
	ListNode *list2 = new ListNode(5, new ListNode(6, new ListNode(4)));

	Solution obj;
	ListNode *output = obj.addTwoNumbers(list1, list2);

	printLst("input list1: ", list1);
	printLst("input list2: ", list2);
	printLst("     output: ", output);

	deleteLst(list1);
	deleteLst(list2);
	deleteLst(output);

	return 0;
}

void printLst(const std::string &msg, ListNode *list)
{
	ListNode *tmp = list;
	std::cout << msg << "[";
	while (tmp)
	{
		std::cout << tmp->val;
		if (tmp->next)
			std::cout << ", ";
		tmp = tmp->next;
	}
	std::cout << "]" << std::endl;
}

void deleteLst(ListNode *list)
{
	ListNode *tmp;

	while (list)
	{
		tmp = list->next;
		delete list;
		list = tmp;
	}
}
