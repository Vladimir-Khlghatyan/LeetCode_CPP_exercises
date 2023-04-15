#include "Solution.hpp"

ListNode* Solution::mergeKLists(std::vector<ListNode*>& lists)
{
	ListNode* res = nullptr;

	for (size_t i = 0; i < lists.size(); ++i)
		res = mergeTwoLists(res, lists[i]);
	return res;
}

ListNode* Solution::mergeTwoLists(ListNode* lst1, ListNode* lst2)
{
	ListNode* tmp1 = lst1;
	ListNode* tmp2 = lst2;
	ListNode* node = nullptr;
	ListNode *tmp1prev = nullptr;

	if (!tmp2)
		return tmp1; 

	if (tmp1 == nullptr && tmp2 != nullptr)
	{
		tmp1 = new ListNode(tmp2->val);
		lst1 = tmp1;
		while (tmp2->next != nullptr)
		{
			tmp1->next = new ListNode(tmp2->next->val);
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
		return lst1;
	}

	while (tmp1 && tmp2)
	{
		if (tmp1->val > tmp2->val)
		{
			if (tmp1 == lst1)
			{
				node = new ListNode(tmp2->val);
				node->next = tmp1;
				lst1 = node;
				tmp1prev = lst1;
				tmp2 = tmp2->next;
			}
			else
			{
				node = new ListNode(tmp2->val);
				node->next = tmp1;
				tmp1prev->next = node;
				tmp1prev = node;
				tmp2 = tmp2->next;
			}
		}
		else
		{
			while (tmp1 && tmp2 && tmp1->val <= tmp2->val)
			{
				tmp1prev = tmp1;
				tmp1 = tmp1->next;
			}
		}
	}

	while (tmp2)
	{
		tmp1prev->next = new ListNode(tmp2->val);
		tmp1prev = tmp1prev->next;
		tmp2 = tmp2->next;
	}
	return lst1;
}

void Solution::deleteList(ListNode* lst)
{
	ListNode* tmp;

	while(lst)
	{
		tmp = lst->next;
		delete lst;
		lst = tmp;
	}
}

void Solution::deleteLists(std::vector<ListNode *> &lists)
{
	for (size_t i = 0; i < lists.size(); ++i)
		deleteList(lists[i]);
}

void Solution::printList(ListNode *lst)
{
	ListNode *tmp = lst;

	std::cout << "[";
	while (tmp)
	{
		std::cout << tmp->val << (tmp->next ? ", " : "");
		tmp = tmp->next;
	}
	std::cout << "]" << std::endl;
}

ListNode *Solution::parsArgument(std::string &str)
{
	ListNode *node = nullptr;
	ListNode *lst = nullptr;
	std::vector<std::string> tokens = split(str, ' ');

	for (size_t i = 0; i < tokens.size(); ++i)
	{
		try
		{
			if (node == nullptr)
			{
				node = new ListNode(std::stoi(tokens[i]));
				lst = node;
				if (i != tokens.size() - 1)
				{
					node->next = new ListNode();
					node = node->next;
				}
			}
			else
			{
				node->val = std::stoi(tokens[i]);
				if (i != tokens.size() - 1)
				{
					node->next = new ListNode();
					node = node->next;
				}
			}
		} catch (...) {
			deleteList(lst);
			std::cerr << "Invalid arguments!" << std::endl;
			throw -1;
		}
	}

	ListNode *tmp = lst;
	while (tmp && tmp->next)
	{
		if (tmp->val > tmp->next->val)
		{
			deleteList(lst);
			std::cerr << "Invalid arguments!" << std::endl;
			throw -1;
		}
		tmp = tmp->next;
	}

	return lst;
}

std::vector<std::string> Solution::split(const std::string &str, char c)
{
	std::vector<std::string>	tokens;
	std::string					token;

	size_t i = -1;
	size_t len = str.length();
	while (++i < len)
	{
		while (i < len && str[i] == c)
			++i;
		while (i < len && str[i] != c)
			token += str[i++];
		if (token != "")
			tokens.push_back(token);
		token = "";
	}
	return tokens;
}
