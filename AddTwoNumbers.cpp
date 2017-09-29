/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode* l1_cp = l1;
	ListNode* l2_cp = l2;
	vector<int> l1_vec;
	vector<int> l2_vec;
	vector<int> sum_vec;
	while(l1_cp)
	{
		l1_vec.push_back(l1_cp->val);
		l1_cp = l1_cp->next;
	}

	while (l2_cp)
	{
		l2_vec.push_back(l2_cp->val);
		l2_cp = l2_cp->next;
	}

	//进位标志
	int flag = 0;
	if (l1_vec.size() > l2_vec.size())
	{
		for (int i = 0, sum = 0; i < l2_vec.size(); i++)
		{
			sum = l1_vec[i] + l2_vec[i] + flag;
			flag = sum / 10;
			sum_vec.push_back(sum % 10);
		}
		for (int i = l2_vec.size(), sum = 0; i < l1_vec.size(); i++)
		{
			sum = l1_vec[i] + flag;
			flag = sum / 10;
			sum_vec.push_back(sum % 10);
		}
		if (flag)
			sum_vec.push_back(1);
	}
	else
	{
		for (int i = 0, sum = 0; i < l1_vec.size(); i++)
		{
			sum = l2_vec[i] + l1_vec[i] + flag;
			flag = sum / 10;
			sum_vec.push_back(sum % 10);
		}
		for (int i = l1_vec.size(), sum = 0; i < l2_vec.size(); i++)
		{
			sum = l2_vec[i] + flag;
			flag = sum / 10;
			sum_vec.push_back(sum % 10);
		}
		if (flag)
			sum_vec.push_back(1);
	}

	ListNode* sum;
	if (sum_vec.size() <= 0)
		return NULL;
	sum = new ListNode(sum_vec[0]);
	ListNode* p1 = sum;
	for (int i = 1; i < sum_vec.size(); i++)
	{
		ListNode* p2;
		p2 = new ListNode(sum_vec[i]);
		p1->next = p2;
		p1 = p2;
	}
	return sum;
    }
};