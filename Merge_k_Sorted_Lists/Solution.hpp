#ifndef SOLUTION_HPP
# define SOLUTION_HPP

# include <iostream>
# include <string>
# include <vector>

 struct ListNode
 {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution
{
	public:
		ListNode *mergeKLists(std::vector<ListNode *> &lists);
		
		void deleteLists(std::vector<ListNode *> &lists);
		void deleteList(ListNode *lst);
		void printList(ListNode *lst);
		ListNode *parsArgument(std::string &str);

	private:	
		ListNode *mergeTwoLists(ListNode *lst1, ListNode *lst2);
		std::vector<std::string> split(const std::string &str, char c);
};

#endif
