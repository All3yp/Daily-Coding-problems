# Daily Coding Problem  🌽

### Solutions to [Daily Coding Problem](https://www.dailycodingproblem.com) in c++.

## 🚀 Problem 1 [Easy]

This problem was recently asked by Google.
Given a list of numbers and a number k, return whether any two numbers 
rom the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?

[Solution 🎉](https://github.com/All3yp/Daily-Coding-problems/blob/main/Daily_Coding_Problem-01.cpp)
#### Click [__*here*__](https://leetcode.com/problems/two-sum/) to visit this question on [*LeetCode*](https://leetcode.com/).
---

## 🚀 Problem 2 [Easy]

This problem was asked by Uber.

Given an array of integers, return a new array such that each element 
at index i of the new array is the product of all the numbers in the 
original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output 
would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], 
the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?

[Solution 🎉](https://github.com/All3yp/Daily-Coding-problems/blob/main/Daily_Coding_Problem-02.cpp)
#### Click [__*here*__](https://leetcode.com/problems/product-of-array-except-self/) to visit this question on [*LeetCode*](https://leetcode.com/).
---

## 🚀 Problem 3 [Medium]

This problem was asked by Google.

Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.

For example, given the following Node class

```js
class TreeNode {
  constructor(val, left = null, right = null) {
    this.val = val;
    this.left = left;
    this.right = right;
  }
}
```

The following test should pass:

```js
const node = new TreeNode(
  'root',
  new TreeNode('left', new TreeNode('left.left'), new TreeNode('right'))
);
expect(deserialize(serialize(node)).left.left.val).toEqual('left.left');
```

[Solution 🎉](https://github.com/All3yp/Daily-Coding-problems/blob/main/Daily_Coding_Problem-03.cpp)
#### Click [__*here*__](https://leetcode.com/problems/serialize-and-deserialize-bst/) to visit this question on [*LeetCode*](https://leetcode.com/).
---
