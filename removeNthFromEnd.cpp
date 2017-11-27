ListNode* removeNthFromEnd(ListNode* head, int n) 
{
	ListNode* lResList;
	ListNode* lResHead = lResList;
	
	ListNode* lNList;
	ListNode* lNHead = lNList;
	int iCount = 0;
	
	while(iCount < n)
		{
			lNList = new ListNode(head->val);
			lNList = lNList->next;
			iCount++;
			head = head->next;
		}
	
	while(head)
	{
		lResList = new ListNode(lNHead->val);
		lResList = lResList->next;
		lNHead = lNHead->next;
		lNList = new ListNode(head->val);
		lNList = lNList->next;
		head = head->next;
	}
	
	lNHead = lNHead->next;
	while(lNHead)
	{
		lResList = new ListNode(lNHead->val);
		lResList = lResList->next;
	}
	return lResHead;
}