# [剑指 Offer 26. 树的子结构](https://leetcode-cn.com/problems/shu-de-zi-jie-gou-lcof/)

```cpp
class Solution {
public:
    bool func(TreeNode* A, TreeNode* B) {
        if(B==NULL) return true;
        if(A==NULL) return false;
        return A->val==B->val&&func(A->left,B->left)&&func(A->right,B->right);
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(A==NULL||B==NULL) return false;
        return func(A,B)||isSubStructure(A->left,B)||isSubStructure(A->right,B);
    }
};
```
