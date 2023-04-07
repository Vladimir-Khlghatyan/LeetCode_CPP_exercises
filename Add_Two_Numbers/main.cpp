#include "Solution.hpp"

int	main(void)
{
	Solution obj;
	
	ListNode *list1 = obj.createRandomList();
	ListNode *list2 = obj.createRandomList();
	ListNode *output = obj.addTwoNumbers(list1, list2);

	obj.printLst(" list1: ➡️ ", list1);
	obj.printLst(" list2: ➡️ ", list2);
	obj.printLst("output: ⏪ ", output);

	obj.deleteLst(list1);
	obj.deleteLst(list2);
	obj.deleteLst(output);

	return 0;
}
