#include <iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode* next;
};

ListNode* getAList(int listLen)
{
//	if(listLen == 0) return NULL;
	ListNode *head = new ListNode;
	cin >> head->val;
	ListNode* helpP = head;
	helpP->next = NULL;
	for(int i = 1; i < listLen; ++i)
	{
		ListNode *node = new ListNode;
		cin >> node->val;
		helpP->next = node;
		helpP = node;
	}
	helpP->next = NULL;

	return head;
}

void showList(ListNode* head)
{
	if(!&head) return;

	ListNode* p = head;
	while(p)
	{
		cout << p->val << ' ';
		p = p->next;
	}
	cout << endl;
}

void deleteList(ListNode* head)
{
	if(!head) return;
	ListNode* tmp = head;
	while(tmp)
	{
		ListNode* tmpNode = tmp->next;
		delete tmp;
		tmp = tmpNode;
	}
}

void qsortList(ListNode* head, ListNode* end)
{
	
}

int main()
{
	while(1)
	{
		int listLen = 0;
		cin >> listLen;
		ListNode* head = getAList(listLen);
		showList(head);

// 		process

		deleteList(head);
	}
	
	return 0;
}
