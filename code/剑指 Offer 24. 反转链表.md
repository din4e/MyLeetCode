# [剑指 Offer 24. 反转链表](https://leetcode-cn.com/problems/fan-zhuan-lian-biao-lcof/)

```cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *root=new ListNode(),*p;
        while(head){
            p=head;
            head=head->next;
            p->next=root->next;
            root->next=p;
        }
        return root->next;
    }
};
```
