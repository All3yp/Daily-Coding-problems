# Daily Coding Problem  🌽

### Solutions to [Daily Coding Problem](https://www.dailycodingproblem.com) in c++.

> **_NOTE:_** Some codes are commented in Portuguese 🇧🇷, because it is my native language.

## 🚀 Problem 1 [Easy]

#### This problem was recently asked by Google.

Given a list of numbers and a number `k`, return whether any two numbers 
rom the list add up to `k`.
For example, given `[10, 15, 3, 7]` and `k` of `17`, return true since `10 + 7` is `17`.

Bonus: Can you do this in one pass?

[Solution 🎉](Daily_Coding_Problem-01.cpp)
#### Click [__*here*__](https://leetcode.com/problems/two-sum/) to visit this question on [*LeetCode*](https://leetcode.com/).
---

## 🚀 Problem 2 [Easy]

#### This problem was asked by Uber.

Given an array of integers, return a new array such that each element 
at index `i` of the new array is the product of all the numbers in the 
original array except the one at `i`.

For example, if our input was `[1, 2, 3, 4, 5]`, the expected output 
would be `[120, 60, 40, 30, 24]`. If our input was `[3, 2, 1]`, 
the expected output would be `[2, 3, 6]`.

Follow-up: what if you can't use division?

[Solution 🎉](Daily_Coding_Problem-02.cpp)
#### Click [__*here*__](https://leetcode.com/problems/product-of-array-except-self/) to visit this question on [*LeetCode*](https://leetcode.com/).
---

## 🚀 Problem 3 [Medium]

#### This problem was asked by Google.

Given the root to a binary tree, implement `serialize(root)`, which serializes the tree into a string, and `deserialize(s)`, which deserializes the string back into the tree.

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

[Solution 🎉](Daily_Coding_Problem-03.cpp)
#### Click [__*here*__](https://leetcode.com/problems/serialize-and-deserialize-bst/) to visit this question on [*LeetCode*](https://leetcode.com/).
---

## 🚀 Problem 4 [Hard]

#### This problem was asked by Stripe.

Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input `[3, 4, -1, 1]` should give 2. The input `[1, 2, 0]` should give 3.

You can modify the input array in-place.

[Solution 🎉](Daily_Coding_Problem-04.cpp)
#### Click [__*here*__](https://leetcode.com/problems/first-missing-positive/) to visit a similar question on [*LeetCode*](https://leetcode.com/).
---

## 🚀 Problem 5 [Medium]

#### This problem was asked by Jane Street.

`cons(a, b)` constructs a pair, and `car(pair)` and `cdr(pair)` returns the first and last element of that pair. For example, `car(cons(3, 4))` returns 3, and `cdr(cons(3, 4))` returns 4.

Given this implementation of cons:

```js
function cons(a, b) {
  function pair(cb) {
    return cb(a, b);
  }
  return pair;
}
```

Implement car and cdr.

[🎉 Solution C++](Daily_Coding_Problem-05.cpp)</br>
[🎉 Solution Swift](https://github.com/All3yp/Daily-Coding-problems/blob/main/Daily_Coding_problem-05.swift)
#### Click [__*here*__](https://leetcode.com/problems/number-of-good-pairs/) to visit a similar question on [*LeetCode*](https://leetcode.com/).

---

## 🚀 Problem 6 [Hard]

#### This problem was asked by Google.

An XOR linked list is a more memory efficient doubly linked list. Instead of each node holding next and prev fields, it holds a field named both, which is an XOR of the next node and the previous node. Implement an XOR linked list; it has an `add(element)` which adds the element to the end, and a `get(index)` which returns the node at index.

If using a language that has no pointers (such as Python), you can assume you have access to `get_pointer` and `dereference_pointer` functions that converts between nodes and memory addresses.

[Solution 🎉](Daily_Coding_Problem-06.cpp)
#### Click [__*here*__](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/) to visit a similar question on [*LeetCode*](https://leetcode.com/).

---

## 🚀 Problem 7 [Medium]

#### This problem was asked by Facebook.

Given the mapping `a = 1, b = 2, ... z = 26`, and an encoded message, count the number of ways it can be decoded.
For example, the message `'111'` would give 3, since it could be decoded as `'aaa'`, `'ka'`, and `'ak'`.
You can assume that the messages are decodable. For example, `'001'` is not allowed.

[Solution 🎉](Daily_Coding_Problem-07.cpp)
#### Click [__*here*__](https://leetcode.com/problems/decode-ways/) to visit this question on [*LeetCode*](https://leetcode.com/).

---

## 🚀 Problem 8 [Easy]

####  This problem was asked by Google.

A unival tree (which stands for "universal value") is a tree where all nodes under it have the same value.
Given the root to a binary tree, count the number of unival subtrees.
For example, the following tree has 5 unival subtrees:

```
   0
  / \
 1   0
    / \
   1   0
  / \
 1   1
```

[Solution 🎉](Daily_Coding_Problem-08.cpp)

<!-- #### Click [__*here*__]() to visit this question on [*LeetCode*](https://leetcode.com/). -->

---

## 🚀 Problem 9 [Hard]

This problem was asked by Airbnb.

Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. Numbers can be 0 or negative.

For example, `[2, 4, 6, 2, 5]` should return `13`, since we pick `2, 6,` and `5`. `[5, 1, 1, 5]` should return `10`, since we pick `5` and `5`.

Follow-up: Can you do this in `O(N)` time and constant space?

[Solution 🎉](Daily_Coding_Problem-09.cpp)

---