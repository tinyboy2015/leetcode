class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ansHead=NULL,*p=NULL;
		int carry=0;
		while(l1||l2||carry)
		{
			int tp=0;
			if(l1) tp+=l1->val;
			if(l2) tp+=l2->val;
			if(carry) tp+=carry;

			if(l1)l1=l1->next;
			if(l2)l2=l2->next;
			if(tp>=10) carry=1,tp%=10;
			else carry =0;

			if(p==NULL) p=new ListNode(tp),ansHead=p;
			else p->next=new ListNode(tp),p=p->next;
		}
		return ansHead;
    }
};