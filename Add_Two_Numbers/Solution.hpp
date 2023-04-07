#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <vector>
# include <string>
# include <cstdlib>
# include <sys/time.h>

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
	ListNode() : val(0), next(nullptr) {}
};

class Solution
{
	public:
		ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);
		ListNode *createRandomList(void);
		void printLst(const std::string &msg, ListNode *lst);
		void deleteLst(ListNode *lst);
};

#endif
