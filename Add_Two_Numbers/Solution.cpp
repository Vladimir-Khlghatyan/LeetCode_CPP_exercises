#include "Solution.hpp"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* answer = new ListNode();
	ListNode* node = answer;
	int rem = 0;
	int tmp;
	while (l1 || l2 || rem)
	{
		tmp = (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
		node->val = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + rem) % 10;
		rem = ((tmp + rem) < 10) ? 0 : 1;
		l1 = l1 ? l1->next : nullptr;
		l2 = l2 ? l2->next : nullptr;
		if (l1 || l2 || rem)
		{
			node->next = new ListNode();
			node = node->next;
		}
	}
	return answer;
}

ListNode* Solution::createRandomList(void)
{
	struct timeval tv;
	gettimeofday(&tv, nullptr);
    std::srand(tv.tv_usec);
    int nodeCount = std::rand() % 10 + 1;
	ListNode *lst = new ListNode();
	ListNode* node = lst;

	while (nodeCount--)
	{
    	gettimeofday(&tv, nullptr);
    	std::srand(tv.tv_usec);
    	int random_number = std::rand() % 10;
		node->val = random_number;
		if (nodeCount != 0)
		{
			node->next = new ListNode();
			node = node->next;
		}
	}
	return lst;
}

void Solution::printLst(const std::string &msg, ListNode *lst)
{
	ListNode *tmp = lst;
	std::cout << msg << "[";
	while (tmp)
	{
		std::cout << tmp->val << ", ";
		tmp = tmp->next;
	}
	std::cout << "\b\b]" << std::endl;
}

void Solution::deleteLst(ListNode *lst)
{
	ListNode *tmp;

	while (lst)
	{
		tmp = lst->next;
		delete lst;
		lst = tmp;
	}
}
