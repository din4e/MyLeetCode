# [剑指 Offer 22. 链表中倒数第k个节点](https://leetcode-cn.com/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof/)

+ 注意和[19. 删除链表的倒数第N个节点](code/../19.%20删除链表的倒数第N个节点.md) 的异同

```cpp
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        if(head==NULL) return NULL;
        ListNode *p=head;
        while(p&&k--){
            p=p->next;
        }
        //if(!p) return p;
        ListNode *q=head;
        while(p&&q){
            p=p->next;
            q=q->next;
        }
        return q;
    }
};
```