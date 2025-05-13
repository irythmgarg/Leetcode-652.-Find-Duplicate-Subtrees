# Leetcode-652.-Find-Duplicate-Subtrees

# Find Duplicate Subtrees

This project provides a C++ solution to the problem of finding all duplicate subtrees in a binary tree. Two trees are considered duplicate if they have the same structure and the same node values.

## 🧠 Problem Statement
-

Given the `root` of a binary tree, return all **duplicate subtrees**. For each kind of duplicate subtree, only the **root node** of any one of them should be returned.

A duplicate subtree means that another subtree of the same structure and node values appears **more than once** in the binary tree.

---

## ✅ Approach

- Each subtree is **serialized** into a string in the format:
- 
- Null nodes are marked using `"n,"` to preserve structure.
- An `unordered_map<string, int>` tracks how many times each subtree serialization appears.
- If a serialization appears **for the second time**, the current node is added to the result.

## 🔧 Code Structure

```cpp
string nope(TreeNode* root, unordered_map<string, int>& st, vector<TreeNode*>& ans)
```
Recursively serializes each subtree.

Uses postorder traversal (left → right → root).

Detects and stores duplicate subtree roots in the ans vector.

---
```cpp
       1
      / \
     2   3
    /   / \
   4   2   4
      /
     4
```
---

🙋 Author

Ridham Garg

B.Tech Computer Engineering, Thapar University

  
