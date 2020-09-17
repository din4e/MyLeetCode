# [剑指 Offer 22. 链表中倒数第k个节点](https://leetcode-cn.com/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof/) **

+ 注意和[19. 删除链表的倒数第N个节点](code/../19.%20删除链表的倒数第N个节点.md) 的异同

```cpp
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        if(k==0||!head) return nullptr;
        ListNode *fast,*slow;
        // ListNode* sentinel=new ListNode(0);sentinel->next=head;
        fast=slow=head;
        while(k--&&fast){
            fast=fast->next;
        }
        // if(!fast) return slow; // if(!fast) return err
        while(fast){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};
```
