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
