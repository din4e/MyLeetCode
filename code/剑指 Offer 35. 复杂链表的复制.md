# [剑指 Offer 35. 复杂链表的复制](https://leetcode-cn.com/problems/fu-za-lian-biao-de-fu-zhi-lcof/)

+ 思路介绍：hashmap 时间复杂度： $O(N)$ 空间复杂度： $O(N)$

```cpp
class Solution {
    unordered_map<Node*,Node*> _map;
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;
        if(_map.find(head)!=_map.end()) return _map[head];
        Node *now=new Node(head->val);
        _map[head]=now;
        now->next=copyRandomList(head->next);
        now->random=copyRandomList(head->random);
        return now;
    }
};
```

另一种方法

```cpp
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;
        Node* node=head;
        while(node!=nullptr){
            Node* tmp=node->next;
            node->next=new Node(node->val);
            node->next->next=tmp;
            node=tmp;
        }

        node=head;
        while(node!=nullptr){
            if(node->random!=nullptr){
                node->next->random=node->random->next; // !
            }
            node=node->next->next;
        }
        Node *now =head->next;
        node=head;
        Node *cur =head->next;
        while(node!=nullptr&&cur!=nullptr){
            node->next=cur->next;
            if(cur->next!=nullptr)
                cur->next=cur->next->next;
            node=node->next;
            cur=cur->next;
        }
        return now;
    }
};
```